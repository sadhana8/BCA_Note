import java.net.*;

public class ProgramUrl {
    public static void main (String[] args){
        try{
            URI uri=new URI("https://example.com:8080/page.html?name=value#section1");
            URL url = uri.toURL();
            System.out.println("URL:" +url);

            System.out.println("Protocol:" + url.getProtocol());
            System.out.println("Host:" + url.getHost());
            System.out.println("Path:" + url.getPath());
            System.out.println("Query:" + url.getQuery());
            System.out.println("Port:" + url.getPort());
            System.out.println("Fragment:" + url.getRef());
           
            System.out.println("Authority: " + url.getAuthority());
            System.out.println("File: " + url.getFile());
            System.out.println("User Information: " + url.getUserInfo());
       
        }
        catch(Exception e){
       System.out.println("An error occurred:" + e.getMessage());
        }
    }
}
