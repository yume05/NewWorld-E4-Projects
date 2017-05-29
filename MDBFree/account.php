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
				<form id="formulaireCompte">
					<legend><?php echo $title1; ?></legend>
					<?php echo $labelLogin; ?>
					<input value="<?php echo $_SESSION['login']; ?>" type="text" id="form6" class="form-control">
					<?php echo $labelLastName; ?>
					<input value=" <?php echo $_SESSION['nom']; ?>" type="text" id="form6" class="form-control">
					<?php echo $labelFirstName; ?>
					<input value="<?php echo $_SESSION['prenom']; ?>" type="text" id="form6" class="form-control">
					<?php echo $labelMail; ?>
					<input value="<?php echo $_SESSION['mail']; ?>" type="text" id="form6" class="form-control">
					<?php echo $labelPhone; ?>
					<input value="<?php echo $_SESSION['tel']; ?>" type="text" id="form6" class="form-control">
					<?php echo $labelType; ?>
					<input value=" <?php echo $_SESSION['type']; ?>" type="text" id="form6" class="form-control">
			</div>
			<div class="col-6 col-md-4">
			<legend><?php echo $title3; ?></legend>
					<?php if($_SESSION['type'] == "Producteur"){
						?>
						<?php echo $labelAddress; ?>
						<input value="<?php echo $_SESSION['adresse']; ?> " type="text" id="form6" class="form-control">

						Facturation
						<input value="<?php echo $_SESSION['facturation']; ?>" type="text" id="form6" class="form-control">

						Statut Juridique
						<input value="<?php echo $_SESSION['statutJuridique']; ?>" type="text" id="form6" class="form-control">

						Denomination Sociale
						<input value="<?php echo $_SESSION['denomination']; ?>" type="text" id="form6" class="form-control">

						Mail contact
						<input value="<?php echo $_SESSION['mailContact']; ?>" type="text" id="form6" class="form-control">

						Siret
						<input value="<?php echo $_SESSION['siret']; ?>" type="text" id="form6" class="form-control">

						Iban
						<input value="<?php echo $_SESSION['iban']; ?>" type="text" id="form6" class="form-control">

						Description Entreprise
						<input value="<?php echo $_SESSION['description']; ?>" type="text" id="form6" class="form-control">
					<?php 
					}  if($_SESSION['type'] == "Consommateur"){
						?>
						<?php echo $labelAddress; ?> : <?php echo $_SESSION['adresse']; ?> </br>
					<?php 
					} if($_SESSION['type'] == "Point de vente"){
						?>
						<?php echo $labelAddress; ?> : <?php echo $_SESSION['adresse']; ?> </br>
						Facturation : <?php echo $_SESSION['facturation']; ?> </br>
						Statut Juridique : <?php echo $_SESSION['statutJuridique']; ?></br> 
						Denomination Sociale : <?php echo $_SESSION['denomination']; ?> </br> 
						Mail contact : <?php echo $_SESSION['mailContact']; ?></br> 
						Siret : <?php echo $_SESSION['siret']; ?>
						</br> 
						Iban : <?php echo $_SESSION['iban']; ?></br> 
					<?php 
					} ?>
				</form>
			</div>
		</div>
	</div>
</div>


<?php
}
include './bas.php';
?>



