<?php
// $cookie_name = "user";
// $cookie_value = "John Doe";
// setcookie($cookie_name, $cookie_value, time()+ (86400 * 30) , "/"); // 86400 = 1 day
?>
<!-- <html>
<body> -->

<?php
// if(!isset($_COOKIE[$cookie_name])) {
//   echo "Cookie named '" . $cookie_name . "' is not set!";
// } else {
//   echo "Cookie '" . $cookie_name . "' is set!<br>";
//   echo "Value is: " . $_COOKIE[$cookie_name];
// }
?>

<!-- </body>
</html> -->
<?php
class student{
  var $name;
  function welcomeMessage(){
    return '<br>Hi,'.$this->get('name');
  }
  function set($key,$value){
    $this->$key=$value;

  }
  function get($key){
    return $this->$key;
  }
}
$ram = new student();
$ram->set('name','sadhana');
echo $ram->welcomeMessage();
?>