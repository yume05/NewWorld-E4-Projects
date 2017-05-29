<?php
include ('./haut.php');
?>
<div class="container">
    <div class="text-center">
    <!--Section: Products v.3-->
    <section class="section">
            <div class="rayons">
            <a href="acheter.php"><button type="button" value="tout" class="btn btn-lg btn-fb blue">Tout</button></a>
            <?php
                $sql = "SELECT * FROM rayons;";
                $result = mysqli_query($connexion, $sql);
                
                while($data = mysqli_fetch_assoc($result)) {
                    echo '<a href="acheter.php?id='.$data['libelle'].'">';
                    echo '<button type="button" value="'.$data["libelle"].'" class="btn btn-lg btn-fb blue">'.$data["libelle"].'</button>';
                    echo '</a>';
                }
            ?>
            </div>
            <div class='categories'>
                    <?php
                    if (isset($_GET['id'])) {
                        $rayon = $_GET['id'];
                        $sql = "SELECT typeProduits.libelle FROM typeProduits INNER JOIN rayons ON typeProduits.idRayons = rayons.id WHERE rayons.libelle = '".$rayon."';";
                        $result = mysqli_query($connexion, $sql);
            
                        while($data = mysqli_fetch_assoc($result) ) {
                            echo '<button type="button" value="'.$data["libelle"].'" class="btn btn-lg btn-fb green lighten-1">'.$data["libelle"].'</button>';
                        }
                    }
                    
                ?>
            </div>
            <hr>
        
            <div class="row">
                    <?php
                        if(isset($_GET['id'])) {
                            $rayon = $_GET['id'];
                            $sql = "SELECT produits.libelle, produits.image, produits.poids, produits.prix FROM rayons INNER JOIN typeProduits ON rayons.id = typeProduits.idRayons INNER JOIN produits ON typeProduits.id = produits.idTypeProduits WHERE rayons.libelle = '".$rayon."';";
                            $result = mysqli_query($connexion, $sql);
                
                            while($data = mysqli_fetch_assoc($result)) {
                                echo '<div class="service_article">';
                                echo '<div class="view overlay hm-white-slight z-depth-1"><strong>'.$data['libelle'].'</strong>';
                                echo '<img src="./img/produits/'.$data["image"].'" alt="">';
                                echo '<p class="card-text">('.$data['poids'].'kg)</p>';
                                echo '<span class="left">'.$data["prix"].'€/kilos </span>';
                                echo '<span class="right"><i class="fa fa-chevron-circle-down" aria-hidden="true"></i><i class="fa fa-chevron-circle-up" aria-hidden="true"></i></span></div>';
                                echo '</div>';
                            }
                        }else{
                            $sql = "SELECT * FROM produits;";
                            $result = mysqli_query($connexion, $sql);

                            while($data = mysqli_fetch_assoc($result)) {
                                echo '<div class="service_article">';
                                echo '<div class="view overlay hm-white-slight z-depth-1"><strong>'.$data['libelle'].'</strong>';
                                echo '<img src="./img/produits/'.$data["image"].'" alt="">';
                                echo '<p class="card-text">('.$data['poids'].'kg)</p>';
                                echo '<span class="left">'.$data["prix"].'€/kilos </span>';
                                echo '<span class="right"><i class="fa fa-chevron-circle-down" aria-hidden="true"></i><i class="fa fa-chevron-circle-up" aria-hidden="true"></i></span></div>';
                                echo '</div>';
                            }
                        }
                        ?>
            </div>
    </section>
    </div>
</div>
<!--/Section: Products v.3-->
<?php
include ('./bas.php');
?>