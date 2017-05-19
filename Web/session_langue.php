<?php
//enregistre en variable de session la langue choisie par l'utilisateur
if(isset($_GET['l']))
{
  $_SESSION['lang']=$_GET['l'];
}

?>
