<?php
$host = "localhost";
$port = "5432";
$dbname = "nom_de_la_base";
$user = "postgres";
$password = "votre_mot_de_passe";

try {
    // Création de la connexion PDO
    $conn = new PDO("pgsql:host=$host;port=$port;dbname=$dbname", $user, $password);
    // Définir le mode d'erreur PDO sur Exception
    $conn->setAttribute(PDO::ATTR_ERRMODE, PDO::ERRMODE_EXCEPTION);
    
    echo "Connexion réussie à PostgreSQL!";
} catch (PDOException $e) {
    echo "Échec de la connexion : " . $e->getMessage();
}

?>