import java.net.*;
import java.io.charset.*;

public class URLEncoding {
    public static void main( String[] args){
    try{
        String filename=  "net #1.pdf";
        String encodedFilename= URLEncoder.encode(filename,StandardCharsets.UTF_8);

        String textname= "Hello World! I am fit & Healthy";
       String encodedTextname = URLEncoder.encode(textname,StandardCharsets.UTF_8);

        System.out.println("Original Textname:" + textname);
        System.out.println("Encoded Textname:" + encodedTextname);

        System.out.println("Original Filename:" + filename);
        System.out.println("Encoded Filename:" + encodedFilename);

    }catch(Exception e){
        System.out.println("An error occurred:" + e.getMessage());

    }
    }
}
