<?php
include ('./haut.php');

echo '<div class="container">
            <div class="text-center">';

if(isset($_SESSION['login'])) 
{ 
    if($_SESSION['type'] == 'Producteur' && $_SESSION['etat'] == 'ACC'){
        if(isset($_GET['act']) AND $_GET['act'] == 'add') {
                //Si formulaire activer
            if(isset($_POST['btEnregistrer'])) {

                if(!empty($_POST['nom']) && !empty($_POST['prix']) && !empty($_POST['poids'])) {
                    $nom = $_POST['nom'];
                    $prix = $_POST['prix'];
                    $poids = $_POST['poids'];

                    $datedebut = $_POST['anneeDebut'].'-'.$_POST['moisDebut'].'-'.$_POST['joursDebut'];
                    $datefin = $_POST['anneeFin'].'-'.$_POST['moisFin'].'-'.$_POST['joursFin'];;
                    
                    
                    //if(!empty($_FILES['fichier']['name'])) {
                            /*echo "rentrer dans le debut de l'upload";
                            $extensions = array('png', '.jpg', '.jpeg');
                            $extension = strrchr($_FILES['fichier']['name'], '.');
                          
                             if(!in_array($extension, $extensions)) {
                                $msg = "<center><i><font color=red>Vous devez insérer uniquement un <b>png</b>, <b>jpeg</b> ou <b>jpg</b>.</font></i></center>"; 
                            
                            } else {
                                $file = md5(date("Y-m-d - H-i-s").basename($_FILES['fichier']['name'])).".".pathinfo($_FILES['fichier']['name'], PATHINFO_EXTENSION);*/
                                //if(move_uploaded_file($_FILES['fichier']['tmp_name'], './img/produits/'.$file)) {
                                    //var_dump($file);
                                   
                                    if(isset($_POST['type'])){
                                        $reqVerif = "SELECT libelle, poids, prix, image, idTypeProduits FROM produits WHERE libelle = ".$nom." AND image = 'noimage.jpeg' AND poids = ".$poids." AND prix = ".$prix." AND idTypeProduits = ".$_POST['type'].";";
                                        if(mysqli_query($connexion, $reqVerif)){
                                            $msg = "<center><i><font color=red>Ce produit existe déjà ! Recommencez </font></i></center>"; 
                                        } else {
                                            $sql = "INSERT INTO produits (libelle, poids, prix, image, datedebut, datefin, idTypeProduits) VALUES ('".$nom."', ".$poids.", ".$prix.", 'noimage.jpeg', '".$datedebut."', '".$datefin."', ".$_POST['type'].");";
                                        //Test connexion à la bdd
                                            if(mysqli_query($connexion, $sql)) {
                                                $reqRecup = "SELECT id FROM produits WHERE libelle = '".$nom."' AND prix like ".$prix." AND poids like ".$poids." AND image = 'noimage.jpeg' AND datedebut = '".$datedebut."' AND datefin = '".$datefin."' AND idTypeProduits like ".$_POST['type'].";";
                                                $result = mysqli_query($connexion, $reqRecup);
                                                $data = mysqli_fetch_assoc($result);

                                                $idNewProduit = $data['id'];
                                                $sql2 = "INSERT INTO propose (etat, producteurProduits, producteurUser) VALUES ('ATT', ".$idNewProduit.", ".$_SESSION['id'].");";

                                                if(mysqli_query($connexion, $sql2)){
                                                    $msg = "<center><i><font color=green>Le produit à bien été proposé ! Une réponse vous sera donnez dans les plus brefs délais</font></i></center>";
                                                }
                                            

                                            } else {
                                                $msg = "<center><i><font color=red>La base de donnée rencontre un problème.</font></i></center>";
                                            }
                                        }
                                    }else{
                                        $msg = "<center><i><font color=red>Il faut impérativement choisir une catégorie</font></i></center>";
                                    }
                                   
                                    //Upload impossible
                                //} else {
                                    //$msg = "<center><i><font color=red>L'upload ne s'est pas effectué. Le répertoire n'existe pas.</font></i></center>";
                                //}
                            //}
                       
                   /* } else {
                        $msg = "<center><i><font color=red>Il faut impérativement remplir tout les champs</font></i></center>";
                    }*/
            } else {
                        $msg = "<center><i><font color=red>Il faut impérativement remplir tout les champs</font></i></center>";
                    }
        }
    }
        ?>
        
            <!--Section: Products v.3-->
            <section class="section"> 
                    <b><?php echo $titleProduire; ?></b>
                    </section>
                     <form method="post" action="produire.php?act=add" enctype="multipart/form-data">
                        <div class="row justify-content-center">
                            <div class="col-6 col-md-4">
                                <select class="mdb-select" name="type">
                                    <option value="" class='rounded-circle' disabled selected>Catégories</option>
                                    <?php 
                                        $sql = "SELECT DISTINCT libelle, id from typeProduits;";
                                        $result = mysqli_query($connexion, $sql);
                                        $date = date("Y-m-d H:i:s");
                                        while($data = mysqli_fetch_assoc($result)) {
                                            echo '<option value="'.$data["id"].'" class="rounded-circle">'.$data["libelle"].'</option>';
                                        }
                                    
                                    ?>
                                </select>
                                <br />
                                <?php echo $labelNameProduit; ?> :<input type="text" placeholder="Salade de montagne.." name="nom" ><br>
                                <?php echo $labelPriceProduit; ?> :<input type="number" placeholder = "1.35" name="prix" step="0.01"  min="0" max="99.99">
                            </div>
                            <div class="col-6 col-md-4">
                                <?php echo $labelWeightProduit; ?> :<input type="number" name="poids" placeholder="0.750" step="0.15" min="0" max="99.99" ><br />
                                <?php echo $labelDateStartProduit; ?> :<br>
                                <?php
                                echo "<SELECT name='joursDebut' Size='1'>";
                                     for($i=1; $i<=31;$i++){           //Lister les jours

                                               if ($i < 10){               //Lister les jours pour pouvoir leur ajouter un 0 devant
                                              echo "<OPTION>0$i<br></OPTION>";
                                                   }
                                               else {
                                              echo "<OPTION>$i<br></OPTION>";
                                                    }
                                                          }
                                echo "</SELECT>";

                                echo '<SELECT name="moisDebut" Size="1">';

                                     for($d=1; $d<=12;$d++){           //Lister les mois

                                               if ($d < 10){               //Lister les jours pour pouvoir leur ajouter un 0 devant
                                              echo "<OPTION>0$d<br></OPTION>";
                                                   }
                                               else {
                                              echo "<OPTION>$d<br></OPTION>";
                                                    }
                                                          }
                                echo "</SELECT>";

                                $date = date('Y');       //On prend l'année en cours
                                    
                                echo '<SELECT name="anneeDebut" Size="1">';

                                     for ($y=$date; $y<=2100; $y++) {          //De l'année 2000 à l'année actuelle
                                         echo "<OPTION><br>$y<br></OPTION>"; }
                                echo "</SELECT>";
                                ?><br />
                                <?php echo $labelDateEndProduit; ?> :<br>
                                <?php
                                    echo "<SELECT name='joursFin' Size='1'>";
                                         for($i=1; $i<=31;$i++){           //Lister les jours
                                                   if ($i < 10){//Lister les jours pour pouvoir leur ajouter un 0 devant
                                                  echo "<OPTION>0$i<br></OPTION>";
                                                       }
                                                   else {
                                                  echo "<OPTION>$i<br></OPTION>";
                                                        }
                                                              }
                                    echo "</SELECT>";

                                    echo '<SELECT name="moisFin" Size="1">';

                                         for($d=1; $d<=12;$d++){           //Lister les mois

                                                   if ($d < 10){               //Lister les jours pour pouvoir leur ajouter un 0 devant
                                                  echo "<OPTION>0$d<br></OPTION>";
                                                       }
                                                   else {
                                                  echo "<OPTION>$d<br></OPTION>";
                                                        }
                                                              }
                                    echo "</SELECT>";

                                    $date = date('Y');       //On prend l'année en cours
                                        
                                    echo '<SELECT name="anneeFin" Size="1">';

                                         for ($y=$date; $y<=2100; $y++) {          //De l'année 2000 à l'année actuelle
                                             echo "<OPTION><br>$y<br></OPTION>"; }
                                    echo "</SELECT>";
                                    ?>
                                    <br>
                               <!-- Image :
                                <input type="file" id="fichier" multiple="multiple" name="fichier" /><br />-->
                            </div>
                       </div> 
                            <?php if(isset($msg)) { echo $msg; } ?>
                            <input type="submit" value="Ajouter" name="btEnregistrer"/>

                            
                    </form>
                    <br />
                    <hr />
                    <b><?php echo $titleProduire1; ?>.</b>
                    

                    <div class="row">

                            <?php
                                    $sql = "SELECT produits.libelle, produits.image, produits.poids, produits.prix, propose.etat FROM produits inner join propose on produits.id = propose.producteurProduits inner join user on propose.producteurUser = user.user_id WHERE user.user_login = '".$_SESSION['login']."';";
                                    $result = mysqli_query($connexion, $sql);
                        
                                    while($data = mysqli_fetch_assoc($result)) {
                                        echo '<div class="service_article">';
                                        echo '<div class="view overlay hm-white-slight z-depth-1"><strong>'.$data['libelle'].'</strong>';
                                        echo '<img src="./img/produits/'.$data["image"].'" alt="">';
                                        echo '<p class="card-text">('.$data['poids'].'kg)</p>';
                                        echo '<span class="left">'.$data["prix"].'€/kilos </span><br />';
                                        if($data['etat'] == 'ATT'){
                                            echo '<button class="btn btn-warning">'.$etat1.'</button>';
                                        }
                                        if($data['etat'] == 'ACC'){
                                            echo '<button class="btn btn-success">'.$etat2.'</button>';
                                        }
                                        if($data['etat'] == 'REF'){
                                            echo '<button class="btn btn-danger">'.$etat3.'</button>';
                                        }
                                        echo '</div></div>';
                                    }
                                
                                ?>
                    </div>
            </section>

<?php
    }else{
        echo $msgError4;
        header( "refresh:1;url=index.php" );
    }
}else{
    echo $msgError4;
    header( "refresh:1;url=index.php" );
}

echo "</div> </div>";

include ('./bas.php');
?>