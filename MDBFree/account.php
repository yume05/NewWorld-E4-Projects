<?php
include './haut.php';
?>
<div class="container">
	<!--Naked Form-->
		<!--Header-->
	<div class="text-center">
		<?php

		if(!isset($_SESSION['login'])) 
		{ 
			header( "refresh:1;url=connexion.php" );
			echo "Vous n'êtes pas connecté";
		} else{

		?>
		<h1><?php echo $bigtitleAccount1; ?></h1>
		<div class="row">
			
			<div class="col-6 col-md-4">
				<?php
					if(isset($_POST['valider'])){
					$login=$_SESSION['login'];
					$resultat = mysqli_query($connexion,"SELECT * FROM user WHERE user_login = '$login' AND user_mdp = '".$_POST['pass']."';"); 
					
					$result = mysqli_fetch_assoc($resultat);
					if(!$result)
					{
						$msg = '<center><i><font color="red">Mauvais mot de passe</font></i></center>';
					}
					elseif (empty($_POST['NewPass']))
					{
						$msg = '<center><i><font color="red">Le nouveau mot de passe n\'a pas été renseigné.</font></i></center>';
					}
					elseif ($_POST['NewPass'] != $_POST['NewPassVerif'])
					{
						$msg = '<center><i><font color="red">Les mots de passe ne correspondent pas.</font></i></center>';
					}
					else
					{
						
						$req="UPDATE user SET user_mdp='".$_POST['NewPass']."' WHERE user_login = '$login';";
						$res = mysqli_query($connexion, $req);
						$msg = '<center><i><font color="green">Le mot de passe a été changé.</font></i></center>';
					}
				}
				if(isset($_POST['valider2'])){
					$login=$_POST['login'];
					$nom=$_POST['nom'];
					$prenom=$_POST['prenom'];
					$email=$_POST['mail'];
					$tel=$_POST['tel'];
					$cp=$_POST['cp'];
					$rue=$_POST['rue'];
					$ville=$_POST['ville'];
					if($_SESSION['type'] == 'Producteur'){	
						$facturation=$_POST['facturation'];
						$statutJuridique = $_POST['statutJuridique'];
						$denomination=$_POST['denomination'];
						$emailContact=$_POST['mailContact'];
						$iban=$_POST['iban'];
						$siret=$_POST['siret'];
						$description=$_POST['description'];
						mysqli_query($connexion,"UPDATE user SET user_login = '".$login."', user_nom = '".$nom."', user_prenom = '".$prenom."', user_mail = '".$email."', user_tel = '".$tel."', user_cp = '".$cp."', user_ville = '".$ville."', user_rue ='".$rue."', user_facturation = '".$facturation."', user_statutJuridique = '".$statutJuridique."', user_denominationSociale = '".$denomination."', user_mailContact = '".$mailContact."', user_iban = '".$iban."', user_siret = '".$siret."', user_descriptionEntreprise = '".$description."' WHERE user_id = ".$_SESSION['id'].";"); 
						
					
					$result = mysqli_fetch_assoc($resultat);
					}
					if($_SESSION['type'] == 'PointDeVente'){
						$facturation=$_POST['facturation'];
						$statutJuridique = $_POST['statutJuridique'];
						$denomination=$_POST['denomination'];
						$emailContact=$_POST['mailContact'];
						$iban=$_POST['iban'];
						$siret=$_POST['siret'];
						mysqli_query($connexion,"UPDATE user SET user_login = '".$login."', user_nom = '".$nom."', user_prenom = '".$prenom."', user_mail = '".$email."', user_tel = '".$tel."', user_cp = '".$cp."', user_ville = '".$ville."' , user_rue ='".$rue."', user_facturation = '".$facturation."', user_statutJuridique = '".$statutJuridique."', user_denominationSociale = '".$denomination."', user_mailContact = '".$mailContact."', user_iban = '".$iban."', user_siret = '".$siret."' WHERE user_id = ".$_SESSION['id'].";"); 
					}
					if($_SESSION['type'] == 'Consommateur'){
						mysqli_query($connexion,"UPDATE user SET user_login = '".$login."', user_nom = '".$nom."', user_prenom = '".$prenom."', user_mail = '".$email."', user_tel = '".$tel."', user_cp = '".$cp."', user_ville = '".$ville."', user_rue ='".$rue."' WHERE user_id = ".$_SESSION['id'].";"); 
						
					}
						
				}

				$requete = "SELECT type.type_libelle, user.user_login, user.user_nom,  user.user_prenom,  user.user_mail,  user.user_tel,  user.user_rue,  user.user_cp,  user.user_ville, user.user_dateInscription, user.user_facturation, user.user_statutJuridique, user.user_denominationSociale, user.user_mailContact, user.user_siret, user.user_iban, user.user_descriptionEntreprise, user.etat FROM user inner join type on  user.user_type=type.type_id WHERE user_id = ".$_SESSION['id'].";"; 
				$result = mysqli_query($connexion, $requete);
				$data = mysqli_fetch_assoc($result);
				
				?>

				<legend><?php echo $title6; ?></legend>	
				<?php if(isset($msg)) { echo $msg; }?>
					<form method='post'>
								<?php echo $labelOldPswd;?><input type='password' name='pass' id='mdp'/><br/><br>
								<?php echo $labelNewPswd; ?><input type='password' name='NewPass' id='mdp'/><br><br/>
							
								<?php echo $labelNewPswdVerif; ?><input type='password' name='NewPassVerif' /><br>
								<br>
							<input type='submit' name='valider' value='<?php echo $buttonSave; ?>'/>
						
					</form>
					
				
			</div>
			<div class="col-6 col-md-4">
				<form method="post" id="formulaireCompte">
					<legend><?php echo $title1; ?></legend>
					<?php echo $labelLogin; ?>
					<input value="<?php echo $data['user_login']; ?>" type="text" name="login" id="form6" class="form-control">
					<?php echo $labelLastName; ?>
					<input value=" <?php echo $data['user_nom']; ?>" type="text" name="prenom" id="form6" class="form-control">
					<?php echo $labelFirstName; ?>
					<input value="<?php echo $data['user_prenom']; ?>" type="text" name="nom" id="form6" class="form-control">
					<?php echo $labelMail; ?>
					<input value="<?php echo $data['user_mail']; ?>" type="text" name="mail" id="form6" class="form-control">
					<?php echo $labelPhone; ?>
					<input value="<?php echo $data['user_tel']; ?>" type="text" name="tel" id="form6" class="form-control">
					<?php echo $labelType; ?>
					<?php echo $_SESSION['type']; ?>
			</div>
			<div class="col-6 col-md-4">
			<legend><?php echo $title3; ?></legend>
					<?php if($_SESSION['type'] == "Producteur"){
						?>
						<?php echo $labelAddress; ?>
						<input value="<?php echo $data['user_rue']; ?> " type="text" name="rue" id="form6" class="form-control">
						
						<?php echo $labelCity; ?>
						<input value="<?php echo $data['user_ville']; ?> " type="text" name="ville" id="form6" class="form-control">
						
						<?php echo $labelZipCode; ?>
						<input value="<?php echo $data['user_cp']; ?> " type="text" name="cp" id="form6" class="form-control">

						Facturation
						<input value="<?php echo $data['user_facturation']; ?>" type="text" name="facturation" id="form6" class="form-control">

						Statut Juridique
						<input value="<?php echo $data['user_statutJuridique']; ?>" type="text" name="statutJuridique" id="form6" class="form-control">

						Denomination Sociale
						<input value="<?php echo $data['user_denominationSociale']; ?>" type="text" name="denomination" id="form6" class="form-control">

						Mail contact
						<input value="<?php echo $data['user_mailContact']; ?>" type="text" name="mailContact" id="form6" class="form-control">

						Siret
						<input value="<?php echo $data['user_siret']; ?>" type="text" name="siret" id="form6" class="form-control">

						Iban
						<input value="<?php echo $data['user_iban']; ?>" type="text" name="iban" id="form6" class="form-control">

						Description Entreprise
						<input value="<?php echo $data['user_descriptionEntreprise']; ?>" type="text" name="description" id="form6" class="form-control">
						
						Etat <?php echo $data['user_etat']; ?>
					<?php 
					}  if($_SESSION['type'] == "Consommateur"){
						?>
						<?php echo $labelAddress; ?>
						<input value="<?php echo $data['user_rue']; ?> " type="text" name="rue" id="form6" class="form-control">
						
						<?php echo $labelCity; ?>
						<input value="<?php echo $data['user_ville']; ?> " type="text" name="ville" id="form6" class="form-control">
						
						<?php echo $labelZipCode; ?>
						<input value="<?php echo $data['user_cp']; ?> " type="text" name="cp" id="form6" class="form-control">
					<?php 
					} if($_SESSION['type'] == "Point de vente"){
						?>
						<?php echo $labelAddress; ?>
						<input value="<?php echo $data['user_rue']; ?> " type="text" name="rue" id="form6" class="form-control">
						
						<?php echo $labelCity; ?>
						<input value="<?php echo $data['user_ville']; ?> " type="text" name="ville" id="form6" class="form-control">
						
						<?php echo $labelZipCode; ?>
						<input value="<?php echo $data['user_cp']; ?> " type="text" name="cp" id="form6" class="form-control">

						Facturation
						<input value="<?php echo $data['user_facturation']; ?>" type="text" name="facturation" id="form6" class="form-control">

						Statut Juridique
						<input value="<?php echo $data['user_statutJuridique']; ?>" type="text" name="statutJuridique" id="form6" class="form-control">

						Denomination Sociale
						<input value="<?php echo $data['user_denominationSociale']; ?>" type="text" name="denomination" id="form6" class="form-control">

						Mail contact
						<input value="<?php echo $data['user_mailContact']; ?>" type="text" name="mailContact" id="form6" class="form-control">

						Siret
						<input value="<?php echo $data['user_siret']; ?>" type="text" name="siret" id="form6" class="form-control">

						Iban
						<input value="<?php echo $data['user_iban']; ?>" type="text" name="iban" id="form6" class="form-control">

					<?php 
					} ?>
					<input type='submit' name='valider2' value='<?php echo $buttonSave; ?>'/>
				
			</div>
			</form>
		</div>
	</div>
</div>


<?php
}
include './bas.php';
?>


