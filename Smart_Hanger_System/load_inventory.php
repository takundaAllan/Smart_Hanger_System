<?php
// load_inventory.php

$servername = "localhost";
$username = "root";
$password = "";
$dbname = "inventorymanagement";
$conn = new mysqli($servername, $username, $password, $dbname);

if ($conn->connect_error) {
  die("Connection failed: " . $conn->connect_error);
}

$sql = "SELECT productName, quantity, purchases FROM inventory";
$result = $conn->query($sql);

$data = array();
if ($result->num_rows > 0) {
  while($row = $result->fetch_assoc()) {
    $data[$row["productName"]] = array("quantity" => intval($row["quantity"]), "purchases" => intval($row["purchases"]));
  }
}

echo json_encode($data);

$conn->close();
?>