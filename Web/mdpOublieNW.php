<?php
include './connect.php';
include './hautNW.php';
include './menuNW.php';
?>

<div id="corpsNW">
<form method="post" id="formulaireMdpOublie" action="">
<br>

		<h1>MOT DE PASSE OUBLIE</h1>
		<fieldset>
		<fieldset>
		<p>Saisissez l'e-mail de votre compte sur New World. 
		<br>Si votre e-mail est correct, un mail vous sera envoyez avec un nouveau mot de passe.
		<br><label for="email">E-mail :</label><input name="email" type="text" id="email" /><br />	
		</p>
		</fieldset>
		<p><input type="submit" value="ok" onClick="<?php ok(); ?>" /></p>
		</fieldset>
		</form>
		</div>
		</body>
		</html>
		<?php

// Générateur de mot de passe
function generer_mot_de_passe($nb_caractere = 12)
{
	$mot_de_passe = "";

	$chaine = "abcdefghjkmnpqrstuvwxyzABCDEFGHJKLMNPQRSTUVWXYZ23456789+@!$%?&";
	$longeur_chaine = strlen($chaine);

	for($i = 1; $i <= $nb_caractere; $i++)
	{
		$place_aleatoire = mt_rand(0,($longeur_chaine-1));
		$mot_de_passe .= $chaine[$place_aleatoire];
	}

	return $mot_de_passe;   
}
function ok(){

	if(isset($_POST['email'])){
		$email=$_POST['email'];
	}


	$requete = "SELECT * FROM user WHERE user_mail = '.$email.';"; 
	

	// Aucun champ n'est vide, on peut enregistrer dans la table 
	if(mysql_query($requete))      
	{
		//echo 'Votre email est correct, un nouveau mot de passe va vous être envoyé.';
		// connexion à la base
		$mdp = generer_mot_de_passe(12);
		// on écrit la requête sql 
		$sql = "UPDATE user SET user_mdp ='".$mdp."' WHERE user_mail ='".$email."';"; 
		echo $mdp;
		// on insère les informations du formulaire dans la table 
		mysql_query($sql) or die('Erreur SQL !'.$sql.'<br>'.mysql_error()); 

		// on affiche le résultat pour le visiteur  
		mysql_close();  // on ferme la connexion 
	}
	else
	{ 

		echo 'E mail incorrecte';

	}

	echo '</div>';

	//Envoi du mail avec le nouveau mot de passe
	
	$mail = $email; // Déclaration de l'adresse de destination.
	if (!preg_match("#^[a-z0-9._-]+@(hotmail|live|msn).[a-z]{2,4}$#", $mail)) // On filtre les serveurs qui rencontrent des bogues.
	{
		$passage_ligne = "\r\n";
		//=====Déclaration des messages au format texte et au format HTML.
		$message_txt = "Cher utilisateur,
			Vous venez de demander un nouveau mot de passe sur New World.
				Voici votre nouveau mot de passe.
				".$mdp."
				Lors de votre connexion, il vous faudra modifier ce mot de passe.
				Si vous avez des questions concernant notre service client, n'hésitez pas à nous contacter diretement sur le site.
				New World.";
		$message_html = "<html><head></head><body><b>Cher utilisateur,</b><br><br>
			Vous venez de demander un nouveau mot de passe sur New World.<br>
			Voici votre nouveau mot de passe <br><br>
			".$mdp."<br><br>
			Lors de votre connexion, il vous faudra modifier ce mot de passe.
			<br>Si vous avez des questions concernant notre service client, n'hésitez pas à nous contacter diretement sur le site.<br>
			<br><i>New World.</i> </body></html>";
		//==========

		//=====Création de la boundary
		$boundary = "-----=".md5(rand());
		//==========

		//=====Définition du sujet.
		$sujet = "Nouveau mot de passe !";
		//=========

		//=====Création du header de l'e-mail.
		$header = "From: \"CamilleL\"<clapprand@btsinfogap.org>".$passage_ligne;
		$header.= "Reply-to: \"CamilleL\" <camille.lapprand@gmail.com>".$passage_ligne;
		$header.= "MIME-Version: 1.0".$passage_ligne;
		$header.= "Content-Type: multipart/alternative;".$passage_ligne." boundary=\"$boundary\"".$passage_ligne;
		//==========

		//=====Création du message.
		$message = $passage_ligne."--".$boundary.$passage_ligne;
		//=====Ajout du message au format texte.
		$message.= "Content-Type: text/plain; charset=\"ISO-8859-1\"".$passage_ligne;
		$message.= "Content-Transfer-Encoding: 8bit".$passage_ligne;
		$message.= $passage_ligne.$message_txt.$passage_ligne;
		//==========
		$message.= $passage_ligne."--".$boundary.$passage_ligne;
		//=====Ajout du message au format HTML
		$message.= "Content-Type: text/html; charset=\"ISO-8859-1\"".$passage_ligne;
		$message.= "Content-Transfer-Encoding: 8bit".$passage_ligne;
		$message.= $passage_ligne.$message_html.$passage_ligne;
		//==========
		$message.= $passage_ligne."--".$boundary."--".$passage_ligne;
		$message.= $passage_ligne."--".$boundary."--".$passage_ligne;
		//==========

		//=====Envoi de l'e-mail.
		mail($mail,$sujet,$message,$header);
		//==========
	}

}

include './partieGriseNW.php';
include './basNW.php';
?>



