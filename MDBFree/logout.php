<?php
// On appelle la session
session_start();

// On écrase le tableau de session
$_SESSION = array();

session_unset();
// On détruit la session
session_destroy();
echo 'Vous êtes bien déconnecter';
header('Location: index.php');
  exit();
?>
