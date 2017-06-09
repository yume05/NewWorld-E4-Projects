<?php
include './haut.php';
echo '<div class="container"><div class="text-center">';
if(isset($_SESSION['panier'])){
	if(isset($_GET['id_produit'])){
		$req = "SELECT id FROM produits WHERE id = ".$_GET['id_produit'].";";
		$produit = mysqli_query($connexion, $req);
		if(empty($produit)){
			die("Ce produit n'existe pas.");
			header("location: acheter.php");
		}else{
			$produitAdd = $_GET['id_produit'];
			$positionProduit = array_search($produitAdd,  $_SESSION['panier']['id_produit']);
			if ($positionProduit !== false)
			{
				$_SESSION['panier']['qte_produit'][$positionProduit]++;
				$referer = isset($_SERVER['HTTP_REFERER']) ? $_SERVER['HTTP_REFERER'] : 'index.php';
				die("Le produit à été rajouter. <br><a href='".$referer."'>Retour sur la page d'achat</a><br><a href='panier.php'>Votre panier</a>");
			}	 
			//Si le produit n'a pas déjà été ajouté
			else{
				array_push($_SESSION['panier']['id_produit'] , $_GET['id_produit']);
				array_push ($_SESSION['panier']['libelle_produit'], $_GET['libelle_produit']);
				array_push($_SESSION['panier']['prix_produit'], $_GET['prix_produit']);
				array_push($_SESSION['panier']['poids_produit'], $_GET['poids_produit']);
				array_push($_SESSION['panier']['image_produit'], $_GET['image_produit']);
				array_push($_SESSION['panier']['qte_produit'], $_GET['qte_produit']);
				$referer = isset($_SERVER['HTTP_REFERER']) ? $_SERVER['HTTP_REFERER'] : 'index.php';
				die($msgOk."<br><a href='".$referer."'>".$msgOk1."</a> <br><a href='panier.php'>".$msgOk2."</a>");
			
			}
		}	
	}else{
		die('Vous n\'avez pas sélectionnez de produit');
		header("location: acheter.php");
	}
}else{
	die("Le panier n'existe pas.");
	header("location: acheter.php");
}
echo '</div></div>';
include './bas.php';
?>