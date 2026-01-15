import java.net.URLConnection;

public class MimeTypeGuesser{
    public static void main(String[] args)
    {
        String filePath = "net #2.pdf";

        //Guess MIMe type from file name

        String mimeTypeByName = URLConnection.guessContentTypeFromName(filePath);
        System.out.println("MIME Type (by file name): " + mimeTypeByName);
    }
}