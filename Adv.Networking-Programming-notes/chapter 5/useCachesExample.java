 import java.io.*;
 import java.net.*;


public class useCachesExample {
    public static void main(String[] args){
        try{
            //Define the url

            URI uri = new URI("https://www.example.com");
            URL url = uri.toURL();

            //open connection
            URLConnection uc = url.openConnection();

            //disable catching to always fetch a fresh copy
            uc.setUseCaches(false);

            //read and print the response
            BufferedReader reader = new BufferedReader(new InputStreamReader(uc.getInputStream()));
            String line;
            while((line = reader.readLine())!= null){
                System.out.println(line);
            }
            
            //close the reader
            reader.close();
            
        }catch(URISyntaxException e){
            System.err.println("Invalid URI:" +e.getMessage());
        }catch(IOException ex){
            ex.printStackTrace();
        }
    }
}
