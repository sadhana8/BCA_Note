import java.net.*;

public class RetrievingUri {
    public static void main (String[] args){
        try{
            URI uri=new URI("https://example.com:8000/page.html?name=value");
           
            System.out.println("URI:" + uri);
            System.out.println("Scheme:" + uri.getScheme());
            System.out.println("Host:" + uri.getHost());
            System.out.println("Query:" + uri.getQuery());
            System.out.println("Port:" + uri.getPort());
            System.out.println("Authority:" + uri.getAuthority());
            System.out.println("Path:" + uri.getPath());
       
        }
        catch(Exception e){
       System.out.println("An error occurred:" + e.getMessage());
        }
    }
}


