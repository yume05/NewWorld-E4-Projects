<?php
include ('./haut.php');
echo '<div class="container">';
echo '<div class="text-center">';
if(isset($_SESSION['login'])) 
{ 
    if($_SESSION['type'] == 'Consommateur'){
   
?>


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
                            $sql = "SELECT produits.libelle, user.user_nom, user.user_prenom, produits.image, produits.poids, produits.prix, produits.id FROM rayons INNER JOIN typeProduits ON rayons.id = typeProduits.idRayons INNER JOIN produits ON typeProduits.id = produits.idTypeProduits INNER JOIN propose ON produits.id = propose.producteurProduits INNER JOIN user ON propose.producteurUser = user.user_id  WHERE rayons.libelle = '".$rayon."' AND propose.etat = 'ACC' ORDER BY rayons.id;";
                            //var_dump ($sql);
                            $result = mysqli_query($connexion, $sql);
                
                            while($data = mysqli_fetch_assoc($result)) {
                                echo '<div class="service_article">';
                                echo '<div class="view overlay hm-white-slight z-depth-1"><strong>'.$data['libelle'].'</strong> par <i>'.$data['user_nom'].' '.$data['user_prenom'].'</i>';
                                echo '<img src="./img/produits/'.$data["image"].'" alt="">';
                                echo '<span class="left">('.number_format($data["poids"],3,",", "").'kg)</span>';
                                echo '<br /><span class="left">'.number_format($data["prix"],2,",", " ").'€/unité</span>';
                                echo '<br />';
                                echo "<a class='add' href='addpanier.php?id_produit=".$data['id']."&amp;libelle_produit=".$data['libelle']."&amp;prix_produit=".$data['prix']."&amp;poids_produit=".$data['poids']."&amp;image_produit=".$data["image"]."&amp;qte_produit=1'><i class='fa fa-cart-plus' aria-hidden='true'></i></a>";
                                echo '</div>';
                                echo '</div>';
                            }
                        }else{
                            $sql = "SELECT produits.libelle, produits.image, produits.prix, produits.poids, user.user_nom, user.user_prenom, produits.id FROM produits INNER JOIN propose ON produits.id = propose.producteurProduits INNER JOIN user ON propose.producteurUser = user.user_id WHERE propose.etat = 'ACC' ORDER BY produits.idTypeProduits;";
                            $result = mysqli_query($connexion, $sql);

                            while($data = mysqli_fetch_assoc($result)) {
                                echo '<div class="service_article">';
                                echo '<div class="view overlay hm-white-slight z-depth-1"><strong>'.$data['libelle'].'</strong> par <i>'.$data['user_nom'].' '.$data['user_prenom'].'</i>';
                                echo '<img src="./img/produits/'.$data["image"].'" alt="">';
                                echo '<span class="left">('.number_format($data['poids'],3,","," ").'kg)</span>';
                                echo '<br /><span class="left">'.number_format($data["prix"],2,","," ").'€/unité</span>';
                                echo '<br />';
                                echo "<a class='add' href='addpanier.php?id_produit=".$data['id']."&amp;libelle_produit=".$data['libelle']."&amp;prix_produit=".$data['prix']."&amp;poids_produit=".$data['poids']."&amp;image_produit=".$data["image"]."&amp;qte_produit=1'><i class='fa fa-cart-plus' aria-hidden='true'></i></a>";
                                
                                echo '</div></div>';
                            }

                        }
                        ?>
            </div>
    </section>
<?php
    }else{
        echo "Il faut etre connecté en tant que consommateur pour acceder à cette page";
        header( "refresh:1;url=index.php" );
    }
}else{
    echo "Il faut etre connecté en tant que consommateur pour acceder à cette page";
    header( "refresh:1;url=index.php" );
}
?>
</div>
</div>
<!--/Section: Products v.3-->
<?php
include ('./bas.php');
?>