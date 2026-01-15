import java.io.*;
import java.net.*;

public class DoOutputExample {
    public static void main(String[] args) {
        try{
            //Create a URL object pointing to a website
            URI uri = new URI("https://www.example.com/");
            URL url = uri.toURL();

            //open a connection to the URL

            URLConnection uc = url.openConnection();

            //check if Output is allowed, if not, enable it
            if(!uc.getDoOutput()){
                uc.setDoOutput(true);
            }

            //send data to the server using Outputstream
            OutputStream outputStream = uc.getOutputStream();
            PrintWriter writer = new PrintWriter(new OutputStreamWriter(outputStream,"UTF-8"));

             //writing data
             writer.println("message=HelloServer&name=User123");
             writer.flush(); // Ensure data id sent

             //close the writer
                 writer.close();
                 System.out.println("Data sent successfully!");
                   
        }catch(URISyntaxException e){
            System.err.println("Invalid URI: " + e.getMessage());
        }
        catch(IOException ex){
            System.err.println("Error: " + ex.getMessage());
        }
    }
}

