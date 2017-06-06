<?php
include './haut.php';
echo '<div class="container">
<!--Naked Form-->
	<!--Header-->
	<div class="text-center">';

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
//On récupềre la valeur des informations
$login=$_POST['login'];
$nom=$_POST['nom'];
$prenom=$_POST['prenom'];
$email=$_POST['email'];
$tel=$_POST['tel'];
if (isset($_POST['type']))
{
$type = $_POST['type'];
	//Consommateur
	if($type == "4"){
		$cp=$_POST['cpCons'];
		$rue=$_POST['rueCons'];
		$ville=$_POST['villeCons'];
		if(empty($login) || empty($nom) || empty($prenom) || empty($email) || empty($cp) || empty($rue) || empty($ville))
		{ 
			echo '<font color="red"><i>Remplir tous les champs !</i></font>';
			header("refresh:2;url=inscription.php");
		}else{
		//On vérifie que le login, mail et type n'existe pas déjà dans la base de données
		$test = mysqli_query($connexion, "SELECT user_id FROM user WHERE user_login = '".$login."' AND user_mail = '".$email."' AND user_type = ".$type.";"); 
		$result = mysqli_num_rows($test);
		//Si il retourne un résultat autre que 0
			if(mysqli_num_rows($test) !== 0){
			{ 
				echo '<font color="red"><i>Un utilisateur porte déjà ce nom, cette email et ce type, réessayez !</i></font>';
				header("refresh:2;url=inscription.php");
			//sinon
			} 
			else
			{
				// récupère un mdp random
				$mdp = generer_mot_de_passe(12);
				// on écrit la requête sql 
				//on insère dans la bdd
				$sql = "INSERT INTO user(user_login, user_nom, user_prenom , user_mdp, user_mail, user_tel, user_type, user_dateInscription, user_cp, user_rue, user_ville) VALUES('".$login."', '".$nom."','".$prenom."', '".$mdp."', '".$email."', '".$tel."', ".$type.", now(), '".$cp."', '".$rue."', '".$ville."');"; 
				// on insère les informations du formulaire dans la table 
				mysqli_query($connexion, $sql);
				echo "<font color='green'><i>Inscription réussie, retour sur l'accueil dans 2 secondes.</i></font>";
				// on affiche le résultat pour le visiteur 
				header( "refresh:2;url=index.php" );
				//mysqli_close();  // on ferme la connexion 

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

		
	}
	//Producteur
	if($type == "3"){
		$cp=$_POST['cpProd'];
		$rue=$_POST['rueProd'];
		$ville=$_POST['villeProd'];
		$statutJuridique = $_POST['statutJuridiqueProd'];
		$denomination=$_POST['denominationProd'];
		$emailContact=$_POST['emailContactProd'];
		$description=$_POST['descriptionProd'];
		if(empty($login) || empty($nom) || empty($prenom) || empty($email) || empty($cp) || empty($rue) || empty($ville) || empty($statutJuridique) || empty($denomination) || empty($emailContact) || empty($description))
		{ 
			echo '<font color="red"><i>Remplir tous les champs !</i></font>';
			header("refresh:2;url=inscription.php");
		}else{
			//On vérifie que le login, mail et type n'existe pas déjà dans la base de données
			$test = mysqli_query($connexion, "SELECT user_id FROM user WHERE user_login = '".$login."' AND user_mail = '".$email."' AND user_type = ".$type.";"); 
			$result = mysqli_num_rows($test);
			//Si il retourne un résultat autre que 0
			if(mysqli_num_rows($test) !== 0){
			{ 
				echo '<font color="red"><i>Un utilisateur porte déjà ce nom, cette email et ce type, réessayez !</i></font>';
				header("refresh:2;url=inscription.php");
			//sinon
			} 
			else
			{
				// récupère un mdp random
				$mdp = generer_mot_de_passe(12);
				// on écrit la requête sql 
				//on insère dans la bdd
				$sql = "INSERT INTO user(user_login, user_nom, user_prenom , user_mdp, user_mail, user_tel, user_type, user_dateInscription, user_cp, user_rue, user_ville, user_statutJuridique, user_denominationSociale, user_mailContact, user_descriptionEntreprise, etat) VALUES('".$login."', '".$nom."','".$prenom."', '".$mdp."', '".$email."', '".$tel."', ".$type.", now(), '".$cp."', '".$rue."', '".$ville."', '".$statutJuridique."', '".$denomination."', '".$emailContact."', '".$description."', 'ATT');"; 
				// on insère les informations du formulaire dans la table 
				mysqli_query($connexion, $sql); 
				echo "<font color='green'><i>Inscription réussie, retour sur l'accueil dans 2 secondes.</i></font>";
				// on affiche le résultat pour le visiteur 
				header( "refresh:2;url=index.php" );
				//mysqli_close();  // on ferme la connexion 

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

		// On vérifie si les champs sont tous remplis
		
	}
	//Point de vente
	if($type == "5"){
		$cp=$_POST['cpPoint'];
		$rue=$_POST['ruePoint'];
		$ville=$_POST['villePoint'];
		$statutJuridique = $_POST['statutJuridiquePoint'];
		$denomination=$_POST['denominationPoint'];
		$emailContact=$_POST['emailContactPoint'];

		if(empty($login) || empty($nom) || empty($prenom) || empty($email) || empty($cp) || empty($rue) || empty($ville) || empty($statutJuridique) || empty($denomination) || empty($emailContact))
		{ 
			echo '<font color="red"><i>Remplir tous les champs !</i></font>';
			header("refresh:2;url=inscription.php");
		}else{
			//On vérifie que le login, mail et type n'existe pas déjà dans la base de données
			$test = mysqli_query($connexion, "SELECT user_id FROM user WHERE user_login = '".$login."' AND user_mail = '".$email."' AND user_type = ".$type.";"); 
			$result = mysqli_num_rows($test);
			//Si il retourne un résultat autre que 0
			if(mysqli_num_rows($test) !== 0){) 
			{ 
				echo '<font color="red"><i>Un utilisateur porte déjà ce nom, cette email et ce type, réessayez !</i></font>';
				header("refresh:2;url=inscription.php");
			//sinon
			} 
			else
			{
				// récupère un mdp random
				$mdp = generer_mot_de_passe(12);
				// on écrit la requête sql 
				//on insère dans la bdd
				$sql = "INSERT INTO user(user_login, user_nom, user_prenom , user_mdp, user_mail, user_tel, user_type, user_dateInscription, user_cp, user_rue, user_ville, user_statutJuridique, user_denominationSociale, user_mailContact, etat) VALUES('".$login."', '".$nom."','".$prenom."', '".$mdp."', '".$email."', '".$tel."', ".$type.", now(), '".$cp."', '".$rue."', '".$ville."', '".$statutJuridique."', '".$denomination."', '".$emailContact."', 'ACC');"; 
				// on insère les informations du formulaire dans la table 
				mysqli_query($connexion, $sql); 
				echo "<font color='green'><i>Inscription réussie, retour sur l'accueil dans 2 secondes.</i></font>";
				// on affiche le résultat pour le visiteur 
				header( "refresh:2;url=index.php" );
				//mysqli_close();  // on ferme la connexion 

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
		// On vérifie si les champs sont tous remplis
		
	}
}else{
	echo '<font color="red"><i>Selectionnez un type !</i></font>';
	header("refresh:3;url=inscription.php");
}



 echo '</div>
 </div>
 </div>';
 include 'bas.php';


?>



