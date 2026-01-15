import java.net.*;

public class ComparingUri {
    public static void main(String[] args) throws Exception{
        URI uri1 = new URI("https://example.com");
        URI uri2 = new URI("https://example.com");
        URI uri3 = new URI("https://example.com/page.html");




        System.out.println("URI1 and URI2 are same:" + uri1.equals(uri2));
        System.out.println("URI1 and URI3 are same:" + uri1.equals(uri3));
      
    }
}
