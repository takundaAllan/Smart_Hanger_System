<?php
// update_inventory.php

$servername = "localhost";
$username = "root";
$password = "";
$dbname = "inventorymanagement";

$conn = new mysqli($servername, $username, $password, $dbname);

if ($conn->connect_error) {
  die("Connection failed: " . $conn->connect_error);
}

if ($_SERVER["REQUEST_METHOD"] == "POST") {
  $productName = $conn->real_escape_string($_POST["productName"]);
  $quantity = intval($_POST["quantity"]);
  $purchases = intval($_POST["purchases"]);

  $sql = "INSERT INTO inventory (productName, quantity, purchases) VALUES ('$productName', $quantity, $purchases) ON DUPLICATE KEY UPDATE quantity = $quantity, purchases = $purchases";

  $conn->query($sql);
}

$conn->close();
?>