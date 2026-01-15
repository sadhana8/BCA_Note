<?php 
class college
{
	private $college_name;
	public function set_collegename($n)
	{
		$this->college_name=$n;
	}
	public function show_collegename()
	{
		echo $this->college_name;
	}

}
class student extends college
{
	private $student_name;
	public function set_studentname($sn)
	{
		$this->student_name=$sn;
	}
	public function show_studentname()
	{
		echo $this->student_name;
	}
}

$st=new student();
$st->set_collegename("Everest");
$st->set_studentname("dilip");
$st->show_collegename();
echo "<br>";
$st->show_studentname();

?>