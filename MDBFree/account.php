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

					<?php echo $labelLogin; ?> : <?php echo $_SESSION['login']; ?></br>
					<?php echo $labelLastName; ?> : <?php echo $_SESSION['nom']; ?> </br>
					<?php echo $labelFirstName; ?> : <?php echo $_SESSION['prenom']; ?> </br>
					<?php echo $labelMail; ?> : <?php echo $_SESSION['mail']; ?> </br>
					<?php echo $labelPhone; ?> : <?php echo $_SESSION['tel']; ?> </br>
					<?php echo $labelAddress; ?> : <?php echo $_SESSION['adresse']; ?> </br>
					<?php echo $labelType; ?> : <?php echo $_SESSION['type']; ?> </br>
					<?php if($_SESSION['type'] == "Producteur"){
						?>
						Facturation : <?php echo $_SESSION['facturation']; ?> </br>
						Statut Juridique : <?php echo $_SESSION['statutJuridique']; ?></br> 
						Denomination Sociale : <?php echo $_SESSION['denomination']; ?> </br> 
						Mail contact : <?php echo $_SESSION['mailContact']; ?></br> 
						Siret : <?php echo $_SESSION['siret']; ?>
						</br> 
						Iban : <?php echo $_SESSION['iban']; ?></br> 
						Description de l'entreprise : <?php echo $_SESSION['description']; ?>
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



