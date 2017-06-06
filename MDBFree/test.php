<?php
include './haut.php';
?>

<select class="mdb-select" name="ville">
    <option value="" class='rounded-circle' disabled selected>Ville</option>
    <?php 
        $sql = "SELECT ville_nom, ville_code_postal, ville_id from villes_france_free ORDER BY ville_code_postal;";
        $result = mysqli_query($connexion, $sql);
        while($data = mysqli_fetch_assoc($result)) {
            echo '<option value="'.$data["ville_id"].'" class="rounded-circle">'.$data["ville_nom"].' - '.$data['ville_code_postal'].'</option>';
        }
    
    ?>
</select>

<?php
include './bas.php';
?>