<!DOCTYPE html>
<?php
include './connect.php';
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
<html lang="en">

<head>
    <meta http-equiv="content-type" content="text/html; charset=utf-8" />
    <meta name="viewport" content="width=device-width, initial-scale=1, shrink-to-fit=no">
    <meta http-equiv="x-ua-compatible" content="ie=edge">
    <title>New World</title>
    <!-- Font Awesome -->
    <link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/font-awesome/4.6.0/css/font-awesome.min.css">
    <!-- Bootstrap core CSS -->
    <link href="css/bootstrap.min.css" rel="stylesheet">
    <!-- Material Design Bootstrap -->
    <link href="css/mdb.min.css" rel="stylesheet">
    <!-- Your custom styles (optional) -->
    <link href="css/style.css" rel="stylesheet">
</head>
<!--Navigation & Intro-->
        <nav class="navbar navbar-toggleable-md navbar-dark mdb-color rgba-green-strong">
            <div class="container">
                <button class="navbar-toggler navbar-toggler-right" type="button" data-toggle="collapse" data-target="#navbarNav" aria-controls="navbarNav" aria-expanded="false" aria-label="Toggle navigation">
                    <span class="navbar-toggler-icon"></span>
                </button>
                <a class="navbar-brand" href="index.php">
                    <img src='./img/world.png' width='30px'><b>NW</b>
                </a>
                <div class="collapse navbar-collapse" id="navbarNav">
                    <ul class="navbar-nav mr-auto">
                        <li class="nav-item">
                            <h4><a href = 'acheter.php' class="nav-link"><?php echo $aBuy;?></a></h4>
                        </li>
                        <li class="nav-item">
                            <h4><a class="nav-link"><?php echo $aProduce; ?></a></h4>
                        </li>
                        <li class="nav-item">
                            <h4><a class="nav-link"><?php echo $aDistribute; ?></a></h4>
                        </li>
                        
                    </ul>
					<?php 
					//Si je suis connecter :
					if(isset($_SESSION['login'])) 
					{
						$login = $_SESSION['login'];
					?>
					<ul class="navbar-nav ml-auto nav-flex-icons">
						<li class="item">
							<h6><?php echo ' '.$login.' '.$aConnected; ?></h6>
						</li>
						<li class="item">
							<h5><a class="nav-link" href="account.php"><?php echo $labelYourProfil; ?></a></h5>
						</li>
						<li class="item">
							<h5><a class="nav-link" href="logout.php"><?php echo $aLogOut; ?></a></h5>
						</li>
					</ul>
					<?php 
					//Si je ne suis pas connecter :
					}
					else
					{
					?>
					<ul class="navbar-nav ml-auto nav-flex-icons">
						<li class="item">
							<h5><a href='./inscription.php' class="nav-link"><?php echo $aRegistration; ?></i></a>	</h5>
						</li>
						<li class="item">
							<h5><a href='./connexion.php' class="nav-link"><?php echo $aLogIn; ?></a></h5>
						</li>
					</ul>
					<?php 
					}
					?>
                    
                </div>
            </div>
        </nav>

<br />
<body>