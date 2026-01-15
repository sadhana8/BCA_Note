 import java.net.*;

public class CreatingUri{
    public static void main (String[] args){
        try{
            URI uri=new URI("https://example.com/page.html");
            
            System.out.println("URI:" +uri);
        }
        catch(Exception e){
       System.out.println("An error occurred:" + e.getMessage());
        }
    }
}  