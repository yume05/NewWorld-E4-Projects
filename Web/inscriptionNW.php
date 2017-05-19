<?php include './connect.php';
include './hautNW.php';
include './menuNW.php';
?>
<div id="corpsNW">
<form method="post" action="albert.php" id="formulaireInscription" enctype="multipart/form-data">
<h1><?php echo $bigTitle1; ?></h1>
<fieldset>
<fieldset><legend><?php echo $title1; ?></legend>

<label for="login">*<?php echo $labelLogin; ?> :</label> <input name="login" type="text" id="login" /></br>
<label for="nom">*<?php echo $labelFirstName; ?>:</label>  <input name="nom" type="text" id="nom"  /></br>
<label for="prenom">*<?php echo $labelLastName; ?> :</label> <input name="prenom" type="text" id="prenom" /></br>


</fieldset>
<fieldset><legend><?php echo $title2; ?></legend>

<label for="email">*<?php echo $labelMail; ?>:</label> <input type="email" name="email" id="email"/><br />
<label for="tel">*<?php echo $labelPhone; ?> :</label> <input type="tel" name="tel" id="tel"><br />

</fieldset>

<fieldset><legend><?php echo $title5;?></legend>
<label for="cp">*<?php echo $labelZipCode; ?>:</label> <input type="text" name="cp" id="cp"/></br>
<label for="rue">*<?php echo $labelAddress; ?>:</label> <input type="text" name="rue" id="rue" /></br>
<label for="ville">*<?php echo $labelCity; ?>:</label> <input type="text" name="ville" id="ville" />

</fieldset>

<fieldset><legend><?php echo $title4; ?></legend>


<input type= "radio" name="type" value="4" checked="checked"><?php echo $valueConsumer; ?><br>
<input type= "radio" name="type" value="3"><?php echo $valueProducer; ?></br>
<input type= "radio" name="type" value="5"><?php echo $valuePointSale; ?></br>
</fieldset>

<!--<fieldset><legend><?php echo $title3; ?></legend></fieldset>
<div id="hiddenProducer">

</div>-->
<p>Un mot de passe aléatoire vous sera envoyé par mail</p>
<p>Les champs précédés d un * sont obligatoires</p>
<p><input type="submit" name="Envoyer" value="<?php echo $aRegistration; ?>" /></p>
</fieldset>
</form>
</div>
<?php
include './partieGriseNW.php';
include './basNW.php';
?>
