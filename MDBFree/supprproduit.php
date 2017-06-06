<?php
include './haut.php';
echo '<div class="container">';
if(isset($_SESSION['panier'])){
	
	if(isset($_GET['del'])){
		$req = "SELECT id FROM produits WHERE id = ".$_GET['del'].";";
		$produit = mysqli_query($connexion, $req);
		if(empty($produit)){
			die("Ce produit n'existe pas.");
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
		  die('Article supprimer');
		  header('Location: panier.php');
		}	
	}else{
		die('Vous n\'avez pas sélectionnez de produit à supprimer');
		header('Location: panier.php');
	}
}else{
	die("Le panier n'existe pas.");
	header('Location: panier.php');
}
echo '</div>';
include './bas.php';
?>