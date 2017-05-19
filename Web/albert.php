<?php
include './connect.php';
include './hautNW.php';
include './menuNW.php';
echo '<div id="corpsNW">';

// Générateur de mot de passe
function generer_mot_de_passe($nb_caractere = 12)
{
        $mot_de_passe = "";
       
        $chaine = "abcdefghjkmnopqrstuvwxyzABCDEFGHJKLMNOPQRSTUVWXYZ023456789+@!$%?&";
        $longeur_chaine = strlen($chaine);
       
        for($i = 1; $i <= $nb_caractere; $i++)
        {
            $place_aleatoire = mt_rand(0,($longeur_chaine-1));
            $mot_de_passe .= $chaine[$place_aleatoire];
        }

        return $mot_de_passe;   
}



	$login=$_POST['login'];
	$nom=$_POST['nom'];
	$prenom=$_POST['prenom'];
	$email=$_POST['email'];
	$tel=$_POST['tel'];
	$cp=$_POST['cp'];
	$rue=$_POST['rue'];
	$ville=$_POST['ville'];
	$type=$_POST['type'];




// On vérifie si les champs sont vides 
if($_POST['login'] <> "" && $_POST['nom'] <> "" && $_POST['prenom'] <> "" && $_POST['rue'] <> "" && $_POST['ville'] <> "" && $_POST['cp'] <> "" && $_POST['email'] <> "" && $_POST['tel'] <> "")
{ 
	$test = mysqli_query($connexion, "SELECT user_id FROM user WHERE user_login = '".$login."' AND user_mail = '".$email."' AND user_type = ".$type.";"); 
	$result = mysqli_num_rows($test);
	echo $result;
	if($result <> 0) 
	{ 
		echo "SELECT user_id FROM user WHERE user_login = '".$login."' AND user_mail = '".$email."' AND user_type = ".$type.";";
		echo '<font color="red"><i>Un utilisateur porte déjà ce nom, cette email et ce type, réessayez !</i></font>';
		header("refresh:3;url=inscriptionNW.php");
	} else  {
		// connexion à la base
		$mdp = generer_mot_de_passe(12);
		// on écrit la requête sql 
		$sql = "INSERT INTO user(user_id, user_login, user_nom, user_prenom, user_mdp, user_mail, user_tel, user_cp, user_rue, user_ville, user_type, user_dateInscription) VALUES('','".$login."', '".$nom."','".$prenom."', '".$mdp."', '".$email."', '".$tel."','".$cp."', '".$rue."', '".$ville."',".$type.", now());"; 
		// on insère les informations du formulaire dans la table 
		mysqli_query($connexion, $sql); 
		echo "INSCRIPTION REUSSIS. RETOUR SUR LA PAGE D'ACCUEIL DANS 1s";
		// on affiche le résultat pour le visiteur 
		header( "refresh:5;url=index.php" );
		mysqli_close();  // on ferme la connexion 

		//##############################################   MAIL  ############################# (NE MARCHE PAS EN LOCAL)
		$mail = $email; // Déclaration de l'adresse de destination.
		if (!preg_match("#^[a-z0-9._-]+@(hotmail|live|msn).[a-z]{2,4}$#", $mail)) // On filtre les serveurs qui rencontrent des bogues.
		{
			$passage_ligne = "\r\n";
		}
		else
		{
			$passage_ligne = "\n";
		}
		//=====Déclaration des messages au format texte et au format HTML.
		$message_html = $textMail1.' '.$login.'<br>'.$mdp.$textMail2;
		//==========
		 
		//=====Création de la boundary
		$boundary = "-----=".md5(rand());
		//==========
		 
		//=====Définition du sujet.
		$sujet = "Inscription sur le site New World !";
		//=========
		 
		//=====Création du header de l'e-mail.
		$header = "From: \"New World\"<clapprand@btsinfogap.org>".$passage_ligne;
		$header.= "Reply-to: \"New World\" <camille.lapprand@gmail.com>".$passage_ligne;
		$header.= "MIME-Version: 1.0".$passage_ligne;
		$header.= "Content-Type: multipart/alternative;".$passage_ligne." boundary=\"$boundary\"".$passage_ligne;
		//==========
		 
		//=====Création du message.
		$message = $passage_ligne."--".$boundary.$passage_ligne;
		//=====Ajout du message au format texte.
		$message.= "Content-Type: text/plain; charset=\"ISO-8859-1\"".$passage_ligne;
		$message.= "Content-Transfer-Encoding: 8bit".$passage_ligne;
		$message.= $passage_ligne.$passage_ligne;
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
// Aucun champ n'est vide, on peut enregistrer dans la table 
	}
}
else     
{ 
	echo '<font color="red"><i>Remplir tous les champs !</i></font>';
	header("refresh:3;url=inscriptionNW.php");
}
	

 echo '</div>';


?>



