<?php 
class student
{
	private $roll;

	public function __construct($r)
	{
		$this->roll=$r;
	}
	public function showroll()
	{
		echo $this->roll;
	}
	public function __destruct()
	{
		
	}
}
$s = new student("450");

$s->showroll();




?>