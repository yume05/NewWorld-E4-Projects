<?php
session_start();
include ('session_langue.php');

if(isset($_SESSION['lang']))
{
include ("translation_".$_SESSION['lang'].".php");
}
else{ 
include("translation_en.php");
}
?>
<html>
	<head>
		<link rel="stylesheet" type="text/css" href="https://fonts.googleapis.com/css?family=Lancelot">
   		<link rel="stylesheet" type="text/css" href="https://fonts.googleapis.com/css?family=Abel">
   		<link rel="stylesheet" type="text/css" href="https://fonts.googleapis.com/css?family=Josefin Slab">
		<script type="text/javascript" src="afficher_cacher_div.js"></script>		
		<meta http-equiv="Content-Type" content="text/html; charset=UTF-8" />
		<link rel="stylesheet" href="style.css" />
		<title>New World</title>
	</head>
	<body>
<div id="hautNW">
<?php 
if(isset($_SESSION['login'])) 
{
	$login = $_SESSION['login'];
?>
	<a href="<?php echo basename($_SERVER['PHP_SELF']);?>?l=fr"><?php echo $lang_fr; ?></a> | <a href="<?php echo basename($_SERVER['PHP_SELF']);?>?l=en"><?php echo $lang_en; ?></a> | <?php echo ' '.$login.' '.$aConnected;?> | <a href="accountNW.php"><?php echo $labelYourProfil; ?></a> | <a href="logout.php"><?php echo $aLogOut; ?></a>
<?php 
}
else
{
	?>
	<a href="<?php echo basename($_SERVER['PHP_SELF']);?>?l=fr"><?php echo $lang_fr; ?></a> | <a href="<?php echo basename($_SERVER['PHP_SELF']);?>?l=en"><?php echo $lang_en; ?></a> | <a href="connexionNW.php"><?php echo $aLogIn; ?></a> / <a href="inscriptionNW.php"><?php echo $aRegistration; ?></a>
	<?php
	
} 
?>
 </div>

