<?php
echo("<?xml version=\"1.0\" encoding=\"iso-8859-1\"?>\n");
/* Variables de connexion : ajustez ces paramètres selon votre propre environnement */
$serveur = "localhost";
$admin   = "clapprand";
$mdp     = "lsoSzKpLierMyuRyz";
$base    = "clapprand_NW";
/* On récupère si elle existe la valeur de la région envoyée par le formulaire */
$idr = isset($_POST['region'])?$_POST['region']:null;
?>
<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Strict//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd">
<html xmlns="http://www.w3.org/1999/xhtml" xml:lang="fr">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=iso-8859-1" xml:lang="fr" />
<title>Sélectionner un département selon la région choisie</title>
<meta name="description" content="Listes déroulantes dynamiques inter-dépendantes" />
<meta name="keywords" content="" />
<meta name="author" content="Cyrano" />
<meta name="generator" content="Zend Studio Environnement et WebExpert 5" />
<meta http-equiv="imagetoolbar" content="no" />
<meta http-equiv="Pragma" content="no-cache" />
</head>
<body style="font-family: verdana, helvetica, sans-serif; font-size: 85%">
<?php
if(isset($_POST['ok']) && isset($_POST['departement']) && $_POST['departement'] != "")
{
    $region_selectionnee = $_POST['region'];
    $dept_selectionne = $_POST['departement'];
?>
<p>Vous avez sélectionné le département <?php echo($dept_selectionne); ?> dans la région <?php echo($region_selectionnee); ?></p>
<?php
}
?>
<h3>Trouver un département</h3>
<?php
/* On établit la connexion à MySQL avec mysql_pconnect() plutôt qu'avec mysql_connect()
*  car on aura besoin de la connexion un peu plus loin dans le script */
$connexion = mysql_pconnect($serveur, $admin, $mdp);
if($connexion != false)
{
    $choixbase = mysql_select_db($base, $connexion);
    $sql1 = "SELECT `id_region`, `region`".
    " FROM `region`".
    " ORDER BY `id_region`";
    $rech_regions = mysql_query($sql1);
    $code_region = array();
    $region = array();
    /* On active un compteur pour les régions */
    $nb_regions = 0;
    if($rech_regions != false)
    {
        while($ligne = mysql_fetch_assoc($rech_regions))
        {
            array_push($code_region, $ligne['id_region']);
            array_push($region, $ligne['region']);

            /* On incrémente de compteur */
            $nb_regions++;
        }
    }
    ?>
<form action="<?php echo($_SERVER['PHP_SELF']); ?>" method="post" id="chgdept">
<fieldset style="border: 3px double #333399">
<legend>Sélectionnez une région</legend>
<select name="region" id="region" onchange="document.forms['chgdept'].submit();">
  <option value="-1">- - - Choisissez une région - - -</option>
    <?php
    for($i = 0; $i < $nb_regions; $i++)
    {
?>
  <option value="<?php echo($code_region[$i]); ?>"<?php echo((isset($idr) && $idr == $code_region[$i])?" selected=\"selected\"":null); ?>><?php echo($region[$i]); ?></option>
<?php
    }
    ?>
</select>
    <?php
    mysql_free_result($rech_regions);
    /* On commence par vérifier si on a envoyé un numéro de région et le cas échéant s'il est différent de -1 */

    if(isset($idr) && $idr != -1)
    {
        /* Cération de la requête pour avoir les départements de cette région */
        $sql2 = "SELECT `id_departement`, `departement`".
        " FROM `departement`".
        " WHERE `id_region` = ". $idr ."".
        " ORDER BY `id_departement`;";
        if($connexion != false)
        {
            $rech_dept = mysql_query($sql2, $connexion);
            /* Un petit compteur pour les départements */
            $nd = 0;
            /* On crée deux tableaux pour les numéros et les noms des départements */
            $code_dept = array();
            $nom_dept = array();
            /* On va mettre les numéros et noms des départements dans les deux tableaux */
            while($ligne_dept = mysql_fetch_assoc($rech_dept))
            {
                array_push($code_dept, $ligne_dept['id_departement']);
                array_push($nom_dept, $ligne_dept['departement']);
                $nd++;
            }
            /* Maintenant on peut construire la liste déroulante */
            ?>
<select name="departement" id="departement">
            <?php  
            for($d = 0; $d<$nd; $d++)
            {
                ?>
  <option value="<?php echo($code_dept[$d]); ?>"<?php echo((isset($dept_selectionne) && $dept_selectionne == $code_dept[$d])?" selected=\"selected\"":null); ?>><?php echo($nom_dept[$d]." (". $code_dept[$d] .")"); ?></option>
                <?php
            }
?>
</select>
<?php
        }
        /* Un petit coup de balai */
        mysql_free_result($rech_dept);
    }
?>
<br /><input type="submit" name="ok" id="ok" value="Envoyer" />
</fieldset>
</form>
<?php
    /* Terminé, on ferme la connexion */
    mysql_close($connexion);
}
else
{
    /* Si on arrive là, c'est pas bon signe, il faut vérifier les 
    * paramètres de connexion, mot de passe, serveur pas démarré etc... */
?>
<p>Un incident s'est produit lors de la connexion à la base de données, veuiillez essayer à nouveau ultérieurement.</p>
<?php
}
?>
</body>
</html>
