<?php
// do not stage this file.
$servername = "127.0.0.1:3306"; 
$username = "root"; 
$password = ""; 
try {
    $conn = new PDO("mysql:host=$servername;dbname=2412123_snap", $username, $password);
    // set the PDO error mode to exception
    $conn->setAttribute(PDO::ATTR_ERRMODE, PDO::ERRMODE_EXCEPTION);
    }
catch(PDOException $e)
    {
    echo "Connection failed: " . $e->getMessage();
    }
?>