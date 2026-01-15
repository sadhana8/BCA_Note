
package calculation;

class Add{
    void add(int a,int b)
    {
        System.out.println("The sum is:"+(a+b));
    }
}
class Sub extends Add{
    void sub(int a,int b )
    
    {
        System.out.println("The substact is:"+(a-b));
    }
}
    class Mul extends Sub{
    void mul(int a,int b )
    
    {
        System.out.println("The multiply is:"+(a*b));
    }
}

public class Calculation {


    public static void main(String[] args) {
      Mul m1=new Mul();
        m1.add(1,3);
       m1.sub(2,4);
       m1.mul(4,5);
      
       
    }
    
}
