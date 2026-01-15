
package throwexample;
import java.util.Scanner;
class Validage extends RuntimeException{
    Validage(String message)

    {
        super( message);
    }

}
public class Throwexample {
    

    public static void main(String[] args) {
        Scanner takeinput=new Scanner(System.in);
        System.out.println("Give input");
        int age=takeinput.nextInt();
        
        try{
              if(age>18)
                  {
                      System.out.println("valid age");
                   }
                else
                    {
                        throw new Validage("Age is less than 18");
                     }
                      }
        catch( Validage e)
        {
           System.out.println("Age should be greater than 18");
        }
        
    }
    
}
