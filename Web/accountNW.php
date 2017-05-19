<?php
include './connect.php';
include './hautNW.php';
include './menuNW.php';
?>
<div id="corpsNW">
<?php

if(!isset($_SESSION['login'])) 
{ 
	header( "refresh:1;url=connexionNW.php" );
	echo "Vous n'êtes pas connecté";
} else{

?>
<form id="formulaireCompte">
	<h1><?php echo $bigtitleAccount1; ?></h1>
	<fieldset>
	<fieldset><legend><?php echo $title1; ?></legend>
<br>
	<label for="login"><?php echo $labelLogin; ?> : </label><?php echo $_SESSION['login']; ?></br>
	<label for="nom"><?php echo $labelLastName; ?> : </label><?php echo $_SESSION['nom']; ?> </br>
	<label for="prenom"><?php echo $labelFirstName; ?> : </label> <?php echo $_SESSION['prenom']; ?> </br>
	<label for="mail"><?php echo $labelMail; ?> : </label><?php echo $_SESSION['mail']; ?> </br>
	<label for="tel"><?php echo $labelPhone; ?> : </label> <?php echo $_SESSION['tel']; ?> </br>
	<label for="adress"><?php echo $labelAddress; ?> : </label> <?php echo $_SESSION['adresse']; ?> </br>
	<label for="type"><?php echo $labelType; ?> : </label> <?php echo $_SESSION['type']; ?> </br>
<br>
	
		<input type="button" value="<?php echo $buttonModifyProfil; ?>" />
	
</form>

<?php
}
echo '</div>';
include './partieGriseNW.php';
include './basNW.php';
?>



