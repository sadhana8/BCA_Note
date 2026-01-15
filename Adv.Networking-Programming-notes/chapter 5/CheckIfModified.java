import java.io.IOException;
import java.net.*;
import java.util.*;


public class CheckIfModified {
    public static void main(String[] args) {
        try{
            URI uri = new URI("https://www.example.com");
            URL url = uri.toURL();

            //open a connection
            URLConnection connection = url.openConnection();

            //set the "ifmodifiedSInce" time to 24 hours ago
            long lastChecked = System.currentTimeMillis() - (24*60*60*1000); //24 hours ago
            connection.setIfModifiedSince(lastChecked);

            //Get the value set
            System.out.println("If-Modified-Since:" + connection.getIfModifiedSince());
            System.out.println("If-Modified-Since:" + new Date(connection.getIfModifiedSince()));

            //connect to the server
            connection.connect();

            //Get the last Modified data to the resource
            long lastModified = connection.getLastModified();
            System.out.println("Last Modified: " + lastModified);
            System.out.println("Last Modified: " + new Date(lastModified));
            

            if(lastModified == 0){
                System.out.println("The server did not provide a Last-Modified header.");
            }else if(lastModified > lastChecked){
                System.out.println("The resource has been updated since the last check.");
            }else{
                System.out.println("The resource has not been modified since the last check.");
            }
        }catch(URISyntaxException e){
            System.out.println("Invalid URI: " + e.getMessage());
        }catch(IOException e){
            e.printStackTrace();
        }
    }
    
}
