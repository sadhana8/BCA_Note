<?php                                 //static member is a common for the class if  static is declare in the class then only static member only work with only static
class Counter{
private static $count = 1;


public static function increment(){   // this is a common function this function only static function increment in static only. in static static data value is common for every method
    self::$count++;
}
public static function getCount(){
    return self::$count;             //  in static member only use static variable.
}
} 


Counter::increment();
Counter::increment();



echo Counter::getCount();      


?>
<?php
// class Counter {
//     private static $count = 0;
//     private $x;
//     public function set_x($n,$z)
//     {
//         $this->x=$n;
//         $count=$z;

//     }

//     public static function increment() {
//         self::$count++;
//     }

//     public static function getCount() {
//         return self::$count;
//     }
//     public static function show_x()
//     {
//         echo $x;
//     }
// }

// $obj1=new Counter();
// $obj2=new Counter();
// $obj1->set_x(10,50);
// $obj2->set_x(20,70);

// Counter::increment();
// Counter::increment();

// Counter::show_x();

// echo Counter::getCount();   // Output: 2

?>