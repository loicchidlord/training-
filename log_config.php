<?php
// Ces lignes permettent de déclarer les informations de la base de données

define('DB_SERVER', 'localhost');
define('DB_USERNAME', 'root');
define('DB_PASSWORD', '12345');
define('DB_NAME', 'db_log');

// Ces lignes permettent la connexion à la base de données

$connect = mysqli_connect(DB_SERVER, DB_USERNAME, DB_PASSWORD, DB_NAME);

// Ces lignes permettent la vérification de la connexion à la base de données

if($connect === false){
    die("ERREUR : Il est impossible de se connecter à la base de données !" . mysqli_connect_error());
}
?>













