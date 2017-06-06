<?php 
include './haut.php';
?>
<div class="container">
<script type="text/javascript">
function ouvrirFermerSpoiler(valeur) {
    var producer = document.getElementById("cacherProducer");
	var producer2 = document.getElementById("cacherProducer2");
	var consumer = document.getElementById("cacherConsumer");
	var pointsale =  document.getElementById("cacherPointSale");
	var pointsale2 =  document.getElementById("cacherPointSale2");
	if(valeur == "3"){	
		pointsale.style.display = "none";
		pointsale2.style.display = "none";
		consumer.style.display = "none";
		producer.style.display = "block";
		producer2.style.display = "block";
	}
	if(valeur == "5"){
		producer.style.display = "none";
		producer2.style.display = "none";
		consumer.style.display = "none";
		pointsale.style.display = "block";
		pointsale2.style.display = "block";
	}
	if(valeur == "4"){
		producer.style.display = "none";
		producer2.style.display = "none";
		pointsale.style.display = "none";
		pointsale2.style.display = "none";
		consumer.style.display = "block";
	}
 }
</script>	
<!--Naked Form-->
	<!--Header-->
	<div class="text-center">
		<h3><i class="fa fa-envelope"></i><?php echo $bigTitle1; ?></h3>
		<hr class="mt-20 mb-2">
		<form method="post" action="verifInscription.php">
			<select class="mdb-select" name="type" onChange="ouvrirFermerSpoiler(this.options[this.selectedIndex].value);">
				<option value="" class='rounded-circle' disabled selected>Choose</option>
				<option value="4" class="rounded-circle"><?php echo $valueConsumer; ?></option>
				<option value="3" class="rounded-circle"><?php echo $valueProducer; ?></option>
				<option value="5" class="rounded-circle"><?php echo $valuePointSale; ?></option>
			</select>
	</div>
	<div class="row justify-content-center">
		<div class="col-6 col-md-4">
		<!--Body-->
			<legend><?php echo $title1; ?></legend>
				<div class="md-form">
					<input type="text" name="login" id="form3" class="form-control">
					<label for="login">*<?php echo $labelLogin; ?> :</label>
				</div>
				<div class="md-form">
					<input type="text" name="nom" id="form3" class="form-control">
					<label for="nom">*<?php echo $labelFirstName; ?>:</label>	
				</div>
				<div class="md-form">
					<input type="text" name="prenom" id="form3" class="form-control">
					<label for="prenom">*<?php echo $labelLastName; ?> :</label>
				</div>
			 
			<legend><?php echo $title2; ?></legend>
				<div class="md-form">
					<input type="text" name="email" id="form3" class="form-control">
					<label for="email">*<?php echo $labelMail; ?>:</label>
				</div>
				<div class="md-form">
					<input type="text" name="tel" id="form3" class="form-control">
					<label for="tel">*<?php echo $labelPhone; ?> :</label>
				</div>
		</div>
		<!-- CONSOMMATEUR -->
		<div id='cacherConsumer' class="col-6 col-md-4">
			<legend><?php echo $title5;?></legend>
					<div class="md-form">
						<input type="text" name="cpCons" id="form3" class="form-control">
						<label for="cpCons">*<?php echo $labelZipCode; ?>:</label>
					</div>
					<div class="md-form">

						<input type="text" name="rueCons" id="form3" class="form-control">
						<label for="rueCons">*<?php echo $labelAddress; ?>:</label>
					</div>
					<div class="md-form">
						<input type="text" name="villeCons" id="form3" class="form-control">
						<label for="villeCons">*<?php echo $labelCity; ?>:</label>
					</div>
		</div>
		
		<!-- PRODUCTEUR -->
			
		<div class="col-6 col-md-4" id='cacherProducer'>
			<legend><?php echo $title5;?></legend>
			<div class="md-form">
				<input type="text" name="cpProd" id="form3" class="form-control">
				<label for="cpProd">*Code postal du siège:</label>
			</div>
			<div class="md-form">

				<input type="text" name="rueProd" id="form3" class="form-control">
				<label for="rueProd">*Adresse du siège:</label>
			</div>
			<div class="md-form">
				<input type="text" name="villeProd" id="form3" class="form-control">
				<label for="villeProd">*Ville du siège:</label>
			</div>
		</div>
		<div class="col-6 col-md-4" id='cacherProducer2'>
			<legend><?php echo $title3; ?></legend>
			<div class="md-form">
				<input type="text" name="statutJuridiqueProd" id="form3" class="form-control">
				<label for="statut">*Statut juridique:</label>
			</div>
			<div class="md-form">
				
				<input type="text" name="denominationProd" id="form3" class="form-control">
				<label for="denomination">*Dénomination sociale:</label>
			</div>
			<div class="md-form">
				<input type="text" name="emailContactProd" id="form3" class="form-control">
				<label for="emailContact">*Email du contact :</label>
			</div>

			<div class="md-form">
				<textarea id="textarea1" name="descriptionProd" class="md-textarea" length="120"></textarea>
				<label for="description">*Description entreprise:</label>
			</div>
		
		</div>
			
			
		<!-- POINT DE VENTE -->
		<div id='cacherPointSale' class="col-6 col-md-4">
			<legend><?php echo $title5;?></legend>
			<div class="md-form">
				<input type="text" name="cpPoint" id="form3" class="form-control">
				<label for="cp">*Code postal du siège:</label>
			</div>
			<div class="md-form">
				<input type="text" name="ruePoint" id="form3" class="form-control">
				<label for="rue">*Adresse du siège:</label>
			</div>
			<div class="md-form">
				<input type="text" name="villePoint" id="form3" class="form-control">
				<label for="ville">*Ville du siège:</label>
			</div>

		</div>
	
		<div id='cacherPointSale2' class="col-6 col-md-4">
			<legend><?php echo $title3; ?></legend>
			<div class="md-form">
				<input type="text" name="statutJuridiquePoint" id="form3" class="form-control">
				<label for="statutJuridique">*Statut juridique:</label>
			</div>
			<div class="md-form">
				<input type="text" name="denominationPoint" id="form3" class="form-control">
				<label for="domination">*Dénomination sociale:</label>
			</div>
			<div class="md-form">
				<input type="text" name="emailContactPoint" id="form3" class="form-control">
				<label for="emailContact">*Email du contact :</label>
			</div>

		</div>
	
	</div>
	<div class="text-center">
		<button class="btn btn-default"><?php echo $aRegistration;?></button>
	</div>
	</form>
		
</div>

<?php
include './bas.php';
?>