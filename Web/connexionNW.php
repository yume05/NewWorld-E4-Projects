<?php
include './connect.php';
include './hautNW.php';
include './menuNW.php';
// lancement de la requete
if(isset($_SESSION['login'])) 
{ 
	header( "refresh:1;url=index.php" );
	echo "Vous êtes déjà connecté";
}else{

	if(empty($_POST['login']) || empty($_POST['mail']) || empty($_POST['password'])){
		$message3 =  '<font color="red"><i>Remplir tous les champs !</i></font>';
	}else{
		$login=$_POST['login'];
		$mail=$_POST['mail'];
		$password=$_POST['password'];

		$requete = "SELECT user.user_id, type.type_libelle, user.user_nom,  user.user_prenom,  user.user_mail,  user.user_tel,  user.user_rue,  user.user_cp,  user.user_ville FROM user inner join type on  user.user_type=type.type_id WHERE  user.user_login = '$login' AND  user.user_mail = '$mail' AND  user.user_mdp = '$password';"; 
		$result = mysqli_query($connexion, $requete);
		$data = mysqli_fetch_assoc($result);
	    if(!$result{
			$message2 =  '<font color="red"><i>Mauvais identifiants, réessayez !</i></font>';
			echo $requete;
		}else{
	    	$_SESSION['id'] =  $data['user_id'];
			$_SESSION['prenom'] = $data['user_prenom'];
			$_SESSION['nom'] = $data['user_nom'];
			$_SESSION['tel']= $data['user_tel'];
			$_SESSION['adresse'] = $date['user_rue'].' '.$data['user_ville'].' '.$data['user_cp'];
			$_SESSION['type'] = $data['type_libelle'];
	    			// autre traitement
			
			$_SESSION['mail'] = $mail;
			$_SESSION['connectOK']=1;
			$_SESSION['login']=$login;
	 		header('Location: index.php');
	 		echo 'ok';

		}
	}

	?>


	<div id="corpsNW">
	<form method="post" id="formulaireConnexion" action="connexionNW.php">
	<br>
	<?php

	if (!isset($_SESSION['login'])) //On est dans la page de formulaire
	{
	?>
		<h1><?php echo $bigTitle2; ?></h1>
		<fieldset>
		<fieldset>
		<p>
		<label for="login"><?php echo $labelLogin; ?> :</label><input name="login" type="text" id="login" /><br />
		<label for="mail"><?php echo $labelMail; ?> :</label><input name="mail" type="text" id="mail" /><br />
		<label for="password"><?php echo $labelPswd; ?> :</label><input type="password" name="password" id="password" />
		</p>
		</fieldset>
			<?php 
	                if (isset($message2)) echo '<p>'.$message2.'</p>';
	                if (isset($message3)) echo '<p>'.$message3.'</p>';
					?>

		<p><input type="submit" value="<?php echo $aLogIn; ?>" /></p>
	<a href="./mdpOublieNW.php"><?php echo $forgetPswd; ?></a>	<a href="./inscriptionNW.php"><?php echo $aRegistration; ?></a>
		</fieldset>
		</form>
		</div>
		</body>
		</html>
	<?php
	}
}
	include './partieGriseNW.php';
	include './basNW.php';
	?>



