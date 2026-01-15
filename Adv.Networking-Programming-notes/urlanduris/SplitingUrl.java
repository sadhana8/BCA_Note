import java.net.*;

public class SplitingUrl {
    public static void main(String[] agrs) throws Exception{
        URI uri = new URI("http://username:password@example.com:8080/blog/article.html?id=3");
        URL url = uri.toURL();
        System.out.println("Authority: " + url.getAuthority());
        System.out.println("File: " + url.getFile());
        System.out.println("User Information: " + url.getUserInfo());
      

    }

    
}
