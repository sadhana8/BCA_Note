 import java.net.*;

public class ConvertingUri {
    public static void main(String[] args)throws Exception{
        URI uri = new URI ("https://example.com/path/to/page?query=value#section");
     

        System.out.println("To String: " + uri.toString());
        System.out.println("Get Raw Path: " + uri.getRawPath());
        System.out.println("Get Raw Query: " + uri.getRawQuery());
        System.out.println("Get Fragmentation: " + uri.getFragment());
    }
}

