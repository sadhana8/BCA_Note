
package abstracts;
abstract  class Bike{
    abstract void start();
    abstract void stop();
    void engine()
    {
        System.out.println("petrol Engine");
    }
}
 class Bikefunction extends Bike{
   
    void start()
    {
        System.out.println("bike started");
    }

void stop()
{
System.out.println("apply break if needed");
}
}
public class Abstracts {

    
    public static void main(String[] args) {
      Bikefunction b1=new Bikefunction();
      b1.start();
      b1.stop();
      b1.engine();
      
    }
    
}
