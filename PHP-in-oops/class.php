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