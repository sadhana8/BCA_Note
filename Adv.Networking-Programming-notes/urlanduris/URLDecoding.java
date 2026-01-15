import java.net.*;
import java.nio.charset.*;

public class URLDecoding {
    public static void main( String[] args){
    try{
         
        String encodedFilename= "net+%231.pdf";
        String decodedFilename= URLDecoder.decode(encodedFilename,StandardCharsets.UTF_8);


        System.out.println("encoded Filename:" + encodedFilename);
        System.out.println("decoded Filename:" + decodedFilename);

        String textname= "Hello+World%21+I+am+fit+%26+Healthy";
       String decodedTextname = URLDecoder.decode(textname,StandardCharsets.UTF_8);

        System.out.println("Original Textname:" + textname);
        System.out.println("Decoded Textname:" + decodedTextname);


    }catch(Exception e){
        System.out.println("An error occurred:" + e.getMessage());

    }
    }
}
