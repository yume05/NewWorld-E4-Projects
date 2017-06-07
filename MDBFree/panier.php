<?php
include './haut.php';
echo '<div class="container">';
echo '<div class="text-center">';
if(isset($_SESSION['login'])) 
{ 
    if($_SESSION['type'] == 'Consommateur'){
	//Montant Global
	$total=0;
	for($i = 0; $i < count($_SESSION['panier']['id_produit']); $i++)
	{
	  $total += $_SESSION['panier']['qte_produit'][$i] * $_SESSION['panier']['prix_produit'][$i];

	}

//Supprimer Article
if(isset($_GET['del'])){
		$req = "SELECT id FROM produits WHERE id = ".$_GET['del'].";";
		$produit = mysqli_query($connexion, $req);
		if(empty($produit)){
			die("Ce produit n'existe pas.");
			header("location: ".$_SERVER["PHP_SELF"]);
		}else{
			//Nous allons passer par un panier temporaire
		  $tmp=array();
		  $tmp['id_produit'] = array();
		  $tmp['image_produit'] = array();
		  $tmp['libelle_produit'] = array();
		  $tmp['prix_produit'] = array();
		  $tmp['poids_produit'] = array();
		  $tmp['qte_produit'] = array();

		  for($i = 0; $i < count($_SESSION['panier']['id_produit']); $i++)
		  {
			 if ($_SESSION['panier']['id_produit'][$i] !== $_GET['del'])
			 {
				array_push( $tmp['id_produit'],$_SESSION['panier']['id_produit'][$i]);
				array_push( $tmp['image_produit'],$_SESSION['panier']['image_produit'][$i]);
				array_push( $tmp['libelle_produit'],$_SESSION['panier']['libelle_produit'][$i]);
				array_push( $tmp['prix_produit'],$_SESSION['panier']['prix_produit'][$i]);
				array_push( $tmp['poids_produit'],$_SESSION['panier']['poids_produit'][$i]);
				array_push( $tmp['qte_produit'],$_SESSION['panier']['qte_produit'][$i]);
			 }

			}
		  //On remplace le panier en session par notre panier temporaire à jour
		  $_SESSION['panier'] =  $tmp;
		  //On efface notre panier temporaire
		  unset($tmp);
		  header("location: ".$_SERVER["PHP_SELF"]);
		}	
}
//Changer quantité +
if(isset($_GET['plus'])){
	//Si la quantité est positive on modifie sinon on supprime l'article
	$idProduit = $_GET['plus'];
	$positionProduit = array_search($idProduit,  $_SESSION['panier']['id_produit']);
	if ($positionProduit !== false)
	{
		//On récupère la quantité initial du produit
		$_SESSION['panier']['qte_produit'][$positionProduit] ++;
		header("location: ".$_SERVER["PHP_SELF"]);
    }	
}
//Changer quantité -
if(isset($_GET['moins'])){
	//Si la quantité est positive on modifie sinon on supprime l'article
	$idProduit = $_GET['moins'];
	$positionProduit = array_search($idProduit,  $_SESSION['panier']['id_produit']);
	if ($positionProduit !== false)
	{
		//On récupère la quantité initial du produit
		$_SESSION['panier']['qte_produit'][$positionProduit] --;
		if($_SESSION['panier']['qte_produit'][$positionProduit] == 0){
			//On supprime le produit du panier si la qte est égal à 0
			header("location: ".$_SERVER["PHP_SELF"]."?del=".$_GET['moins']);
		}else{
			//Sinon c'est ok
			header("location: ".$_SERVER["PHP_SELF"]);
		}
		
    }	
}

//Vider panier
if(isset($_GET['viderPanier'])){
	$tmp=array();
	  $tmp['id_produit'] = array();
	  $tmp['image_produit'] = array();
	  $tmp['libelle_produit'] = array();
	  $tmp['prix_produit'] = array();
	  $tmp['poids_produit'] = array();
	  $tmp['qte_produit'] = array();
	  //On remplace le panier en session par notre panier temporaire à jour
	  $_SESSION['panier'] =  $tmp;
	  //On efface notre panier temporaire
	  unset($tmp);
		header("location: ".$_SERVER["PHP_SELF"]);
		if(isset($_GET['commandeFait'])){
			$msg = "<center><i><font color=green>La commande à bien été enregistrer, vous pouvez voir le récapitulatif de vos commandes dans votre partie 'Profil'</font></i></center>";
		}
}
//Vider panier
if(isset($_GET['validerPanier'])){
	$nbArticles=count($_SESSION['panier']['id_produit']);
	if ($nbArticles > 0){
		if(isset($_POST['pdv']) && $_POST['pdv'] != ""){
			$qteEnTout = 0;
			
			for ($i=0; $i<count($_SESSION['panier']['libelle_produit']); $i++) {
					mysqli_query($connexion, "INSERT INTO commande (ordreNbre, idUser, libelleProduit, qteProduit, prixProduit, total, nom, prenom, rue, ville, cp, tel, dateCommande, pdv) VALUES (".$i.",'".$_SESSION['id']."','".$_SESSION['panier']["libelle_produit"][$i]."','".$_SESSION['panier']["qte_produit"][$i]."','".$_SESSION['panier']["prix_produit"][$i]."','".$total."','".$_SESSION['nom']."', '".$_SESSION['prenom']."', '".$_SESSION['rue']."', '".$_SESSION['ville']."', '".$_SESSION['cp']."', '".$_SESSION['tel']."', now(), ".$_POST['pdv']." );") or die(mysql_error());  
					$qteEnTout += $_SESSION['panier']['qte_produit'][$i];
					
			}
			$text = "INSERT INTO chiffreAffaire (dateCommande, prixTotal, idUser, qteProduit, pdv) VALUES (now(), '".$total."', ".$_SESSION['id'].", '".$qteEnTout."', ".$_POST['pdv'].");";
			mysqli_query($connexion, $text);
			var_dump($text);	
			header("location: ".$_SERVER["PHP_SELF"]."?viderPanier=1&commandeFait=1");
			
		}else{
			$msg = "<center><i><font color=red>Veuillez choisir un point de vente avant de valider votre commande</font></i></center>";
		}
	}else{
		$msg = "<center><i><font color=red>Votre panier est vide</font></i></center>";
	}
}



?>
<form method="post" action="panier.php?validerPanier=1" enctype="multipart/form-data">
<h1>Votre panier</h1>
<div class="panier">
<table>
	<tr>
		<th>Numéro</th>
		<th>Image</th>
		<th>Produit</th>
		<th>Poids</th>
		<th>Prix unité</th>	
		<th>Qte</th>
		<th>Action</th>
		<th>Supprimer</th>

	</tr>
	<?php

		$nbArticles=count($_SESSION['panier']['id_produit']);
	   if ($nbArticles <= 0){
		   echo "<tr><td></td></tr>";
	   echo "Panier est vide.";
	   }
	   else
	   {
	      for ($i=0 ;$i < $nbArticles ; $i++)
	      {
	         echo "<tr>";
			 echo "<td>".$i."</td>";
			 echo "<td><img src='img/produits/".$_SESSION['panier']['image_produit'][$i]."'></td>";
	         echo "<td>".$_SESSION['panier']['libelle_produit'][$i]."</ td>";    
			 echo "<td>".number_format($_SESSION['panier']['poids_produit'][$i], 3,","," ")." kilos</td>";
			 echo "<td>".number_format($_SESSION['panier']['prix_produit'][$i],2,","," ")." €</td>";
			 echo "<td>".$_SESSION['panier']['qte_produit'][$i]."</td>";
			 echo "<td><a href='panier.php?plus=".$_SESSION['panier']['id_produit'][$i]."'><i class='fa fa-arrow-up' aria-hidden='true'></i></a>  <a href='panier.php?moins=".$_SESSION['panier']['id_produit'][$i]."'><i class='fa fa-arrow-down' aria-hidden='true'></i></a></td>";
			 echo "<td><a href='panier.php?del=".$_SESSION['panier']['id_produit'][$i]."'><i class='fa fa-trash-o' aria-hidden='true'></i></a></td>";
	         echo "</tr>";
	      }
	   }
	   ?>
</table>
</div>
</div>
<div style="text-align:right;">
Vous avez <strong><?php echo $nbArticles; ?></strong> article(s) dans votre panier
<p>Total : <strong><?php echo number_format($total, 2,","," "); ?> €</strong></p>
</div>

Choississez votre point de relais : 
<select name="pdv">
<option value="" class='rounded-circle' disabled selected>Pdv</option>
	<?php 
		$sql = "SELECT user_id, user_nom, user_prenom, user_rue, user_cp, user_ville from user where user_type like 5;";
		$result = mysqli_query($connexion, $sql);
		while($data = mysqli_fetch_assoc($result)) {
			echo '<option value="'.$data["user_id"].'" class="rounded-circle">'.$data["user_rue"].' '.$data["user_ville"].' '.$data["user_cp"].'</option>';
		}
		?>
										
</select>

<br></br>
<input type="submit" name="valider"></input>
<a href="panier.php?viderPanier=1"><button name="vider">Vider Panier</button></a>
</form>
<?php if(isset($msg)) { echo $msg; } ?>

</div>
<?php
    }else{
        echo "Il faut etre connecté en tant que consommateur pour acceder à cette page";
        header( "refresh:1;url=index.php" );
    }
}else{
    echo "Il faut etre connecté en tant que consommateur pour acceder à cette page";
    header( "refresh:1;url=index.php" );
}
?>
</div>
</div>
<?php
include './bas.php';?>