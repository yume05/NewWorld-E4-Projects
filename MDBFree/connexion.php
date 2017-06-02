<?php 
include './haut.php';
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

		$requete = "SELECT user.user_id, type.type_libelle, user.user_nom,  user.user_prenom,  user.user_mail,  user.user_tel,  user.user_rue,  user.user_cp,  user.user_ville, user.user_dateInscription, user.user_facturation, user.user_statutJuridique, user.user_denominationSociale, user.user_mailContact, user.user_siret, user.user_iban, user.user_descriptionEntreprise, user.etat FROM user inner join type on  user.user_type=type.type_id WHERE  user.user_login = '$login' AND  user.user_mail = '$mail' AND  user.user_mdp = '$password';"; 
		$result = mysqli_query($connexion, $requete);
		$data = mysqli_fetch_assoc($result);
	    if(!$result){
			$message2 =  '<font color="red"><i>Mauvais identifiants, réessayez !</i></font>';
			echo $requete;
		}else{
	    	$_SESSION['id'] =  $data['user_id'];
			$_SESSION['prenom'] = $data['user_prenom'];
			$_SESSION['nom'] = $data['user_nom'];
			$_SESSION['tel']= $data['user_tel'];
			$_SESSION['adresse'] = $date['user_rue'].' '.$data['user_ville'].' '.$data['user_cp'];
			$_SESSION['type'] = $data['type_libelle'];
			$_SESSION['dateInscription'] = $data['user_dateInscritpion'];
			$_SESSION['facturation'] = $data['user_facturation'];
			$_SESSION['statutJuridique'] = $data['user_statutJuridique'];
			$_SESSION['denomination'] = $data['user_denominationSociale'];
			$_SESSION['mailContact'] = $data['user_mailContact'];
			$_SESSION['siret'] = $data['user_siret'];
			$_SESSION['iban'] = $data['user_iban'];
			$_SESSION['description'] = $data['user_descriptionEntreprise'];
			$_SESSION['etat'] = $data['etat'];
	    			// autre traitement
			
			$_SESSION['mail'] = $mail;
			$_SESSION['connectOK']=1;
			$_SESSION['login']=$login;
	 		header('Location: index.php');
	 		echo 'ok';

		}
	}
?>
<div class="container">
	
	<div class="text-center">
		<h3><i class="fa fa-hand-spock-o" aria-hidden="true"></i><?php echo $bigTitle2; ?></h3>
		<hr class="mt-20 mb-2">
	</div>
				
	<div class="row justify-content-center">
		<div class="col-6 col-md-4">
			<form method="post" id="formulaireConnexion" action="connexion.php">
			<?php
			if (!isset($_SESSION['login'])) //Si la variable n'existe pas
			{
			?>
				<!--Body-->
				<div class="md-form">
					<i class="fa fa-pencil prefix"></i>
					<input type="text" name="login" id="form2" class="form-control">
					<label for="form2"><?php echo $labelLogin; ?> :</label>
				</div>
				<div class="md-form">
					<i class="fa fa-envelope prefix"></i>
					<input type="text" name = "mail"id="form2" class="form-control">
					<label for="form2"><?php echo $labelMail; ?> :</label>
				</div>

				<div class="md-form">
					<i class="fa fa-lock prefix"></i>
					<input type="password" name="password" id="form4" class="form-control">
					<label for="form4"><?php echo $labelPswd; ?> :</label>
				</div>
				<?php 
	                if (isset($message2)) echo '<p>'.$message2.'</p>';
	                if (isset($message3)) echo '<p>'.$message3.'</p>';
					?>
				<div class="text-center">
					<button class="btn btn-default"><?php echo $aLogIn; ?></button>
				</div>
				<?php 
			}
			?>

			</form>

			<!--Footer-->
			<div class="modal-footer">
				<div class="options">
					<p>Not a member? <a href="./inscription.php">Sign Up</a></p>
					<p><a href="./mdpOublieNW.php"><?php echo $forgetPswd; ?></a></p>
				</div>
			</div>
			<!--Naked Form-->
		</div>
	</div>
</div>

<?php
}
include './bas.php';
?>