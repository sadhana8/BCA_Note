<?php   
   //function overloading which class name is same and their parameter is different not supported in php
//    class sample{
//     private $result;
//     public function sum($x,$y){
//         $this->result=$x+$y;
//         echo $this->result;
//     }
//     public function sum($x,$y,$z){
//         $this->result=$x+$y+$z;
//         echo $this->result;
//     }
//     public function sum($x,$y,$z,$n){
//         $this->result=$x*$y*$z*$n;
//         echo $this->result;
//     }
//    }

//    st=new  sample();
//    st

class shape
{
	public function calcArea()
	{

	}
}
class rect extends shape
{
	private $l;
	private $b;
	public function __construct($x,$y)
	{
		$this->l=$x;
		$this->b=$y;
	}
	public function calcArea()
	{
		echo $this->l*$this->b;
        echo "<br>";
	}
}
class square extends shape
{
	private $l;
	public function __construct($x)
	{
		$this->l=$x;
	}
	public function calcArea()
	{
		echo $this->l*$this->l;
	}
}
$r=new rect(2,3);
$r->calcArea();
$s=new square(2);
$s->calcArea();

?>