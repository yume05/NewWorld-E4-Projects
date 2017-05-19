<?php
include './connect.php';
// lancement de la requete
if(isset($_POST['login']) && isset($_POST['mail']) && isset($_POST['password'])){
	$login=$_POST['login'];
	$mail=$_POST['mail'];
	$password=$_POST['password'];

	$requete = "SELECT user.user_id, type.type_libelle, user.user_nom,  user.user_prenom,  user.user_mail,  user.user_tel,  user.user_rue,  user.user_cp,  user.user_ville FROM user inner join type on  user.user_type=type.type_id WHERE  user.user_login = '.$login.' AND  user.user_mail = '.$mail.' AND  user.user_mdp = '.$password.';"; 
	$requete1 = mysql_query($requete);

	if($requete1){

		while ($row = mysql_fetch_assoc($requete1)) {
    			$_SESSION['id'] =  $row['user_id'];
			$_SESSION['prenom'] = $row['user_prenom'];
			$_SESSION['nom'] = $row['user_nom'];
			$_SESSION['tel']= $row['user_tel'];
			$_SESSION['adresse'] = $row['user_rue'].' '.$row['user_ville'].' '.$row['user_cp'];
			$_SESSION['type'] = $row['type_libelle'];
    			// autre traitement
		}
		$_SESSION['mail'] = $mail;
		$_SESSION['connectOK']=1;
		$_SESSION['login']=$login;
 		header('Location: index.php');
	}else{
	echo 'Mauvais identifiants';
	echo $requete;
	 header('Location: connexionNW.php');
	}
}else{
echo 'Erreur dans la connexion';
header('Location: connexionNW.php');
}
?>
