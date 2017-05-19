<?php
include './connect.php';

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



// lancement de la requete
if(empty($_POST['login'])){
	$login=$_POST['login'];
}else{
	 $message1 =  '<font color="red"><i>Entrez un login</i></font>';

}

if(empty($_POST['nom'])){
	$nom=$_POST['nom'];
}else{
	 $message2 =  '<font color="red"><i>Entrez un nom</i></font>';

}

if(empty($_POST['prenom'])){
	$prenom=$_POST['prenom'];
}else{
	 $message3 =  '<font color="red"><i>Entrez un prenom</i></font>';

}

if(empty($_POST['email'])){
	$email=$_POST['email'];
}else{
	 $message4 =  '<font color="red"><i>Entrez un email</i></font>';

}

if(empty($_POST['tel'])){
	$tel=$_POST['tel'];
}else{
	 $message5 =  '<font color="red"><i>Entrez un telephone</i></font>';

}


if(empty($_POST['cp'])){
	$cp=$_POST['cp'];
}else{
	 $message6 =  '<font color="red"><i>Entrez un code postal</i></font>';

}

if(empty($_POST['rue'])){      
	$rue=$_POST['rue'];
}else{
	 $message7 =  '<font color="red"><i>Entrez une rue</i></font>';

}

if(empty($_POST['ville'])){
	$ville=$_POST['ville'];
}else{
	 $message8 =  '<font color="red"><i>Entrez une ville</i></font>';

}

if(empty($_POST['type'])){
	$type=$_POST['type'];
}else{
	 $message9 =  '<font color="red"><i>Sélectionnez un type</i></font>';

}

// On vérifie si les champs sont vides 
if(empty($login) || (empty($nom)) || (empty($prenom)) || (empty($email)) || (empty($cp)) || (empty($rue)) || (empty($ville)) || (empty($type)))
{ 
	$message10 = '<font color="red"><i>Erreur dans vos champs</i></font>';
} 
// Aucun champ n'est vide, on peut enregistrer dans la table 
else     
{ 
	$test = mysql_query("SELECT user_id FROM user WHERE user_login = '$login' AND user_mail = '$email' AND user_type = '$type';"); 

	if(mysql_num_rows($test) > 0) 
	{ 
		 $message11 =  '<font color="red"><i>Un utilisateur porte déjà ce nom, cette email et ce type, réessayez !</i></font>';

	} else  {

		// connexion à la base
		$mdp = generer_mot_de_passe(12);
		// on écrit la requête sql 
		$sql = "INSERT INTO user(user_id, user_login, user_nom, user_prenom, user_mdp, user_mail, user_tel, user_cp, user_rue, user_ville, user_type, user_dateInscription) VALUES('','$login', '$nom','$prenom', '$mdp', '$email', '$tel','$cp', '$rue', '$ville','$type', now())"; 
		// on insère les informations du formulaire dans la table 
		mysql_query($sql) or die('Erreur SQL !'.$sql.'<br>'.mysql_error()); 
		echo "INSCRIPTION REUSSIS. RETOUR SUR LA PAGE D'ACCUEIL DANS 1s";
		// on affiche le résultat pour le visiteur 
		header( "refresh:1;url=index.php" );
		mysql_close();  // on ferme la connexion 
		
	

 echo '</div>';

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
	}
}
?>



