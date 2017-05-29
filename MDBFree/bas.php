<!-- /Start your project here-->
    <!-- SCRIPTS -->
    <!-- JQuery -->
    <script type="text/javascript" src="js/jquery-3.1.1.min.js"></script>
    <!-- Bootstrap tooltips -->
    <script type="text/javascript" src="js/tether.min.js"></script>
    <!-- Bootstrap core JavaScript -->
    <script type="text/javascript" src="js/bootstrap.min.js"></script>
    <!-- MDB core JavaScript -->
    <script type="text/javascript" src="js/mdb.min.js"></script>
</body>
<!--Footer-->
<footer class="page-footer center-on-small-only brown darken-1">
    <!--Footer Links-->
    <div class="container-fluid">
        <!--First row-->
       <div class="row">
			<div class="col-md-2 offset-md-2">
                <h5 class="feature-title orange-text"><?php echo $aParticipate; ?></h5>
				<ul>
					<li><?php echo $aBecomeCustomer; ?></li>
					<li><?php echo $aKnowDo; ?></li>
					<li><?php echo $aQuality; ?></li>
					<li><?php echo $aKnowledgeArtisans; ?></li>
				</ul>
			</div> 
        <!--/First column-->

        <!--Second column-->
			<div class="col-md-2 offset-md-1">
                <h5 class="feature-title orange-text"><?php echo $aOfferProducts; ?></h5>
				<ul>
					<li><?php echo $aDistribute; ?></li>
					<li><?php echo $aReduceTransport; ?></li>
					<li><?php echo $aCommunicate; ?></li>
					<li><?php echo $aReceptesGrandmother; ?></li>
				</ul>
			</div>      
        <!--/Second column-->

        <!--Third column-->
			<div class="col-md-2 offset-md-1">
                <h5 class="feature-title orange-text"><?php echo $aTransformate; ?></h5>
				<ul>
					<li><?php echo $aUnderstand; ?></li>
					<li><?php echo $aFreshProducts; ?></li>
					<li><?php echo $aSecretProducers; ?></li>
					<li><?php echo $aFoodPreservation; ?></li>
				</ul>
			</div>
            
        </div>
        <!--/Third column-->
		
    </div>
    <!--/.Footer Links-->

    <!--Copyright-->
    <div class="footer-copyright">
        <div class="container">
            ©2017 Copyright <a href="<?php echo basename($_SERVER['PHP_SELF']);?>?l=fr"><img src='./img/flag-fr.png' width="25px" /></a>
							<a href="<?php echo basename($_SERVER['PHP_SELF']);?>?l=en"><img src='./img/flag-gb.png' width="30px" /></a>	

        </div>
    </div>
    <!--/.Copyright-->
</footer>
<!--/.Footer-->

<!--/.Footer-->
</html>
