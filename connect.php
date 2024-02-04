<?php 
$sname="localhost";
$suname="root";
$password= "";
$db_name= "project";
$conn =mysqli_connect("$sname","$suname","$password","$db_name");
if (!$conn) {
    echo    "Connetion failed";
}
