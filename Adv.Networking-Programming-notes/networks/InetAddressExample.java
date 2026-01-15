import java.net.*;

public class InetAddressExample{
  public static void main(String[] main){
    try{
      InetAddress address = InetAddress.getByName("www.google.com");
      //InetAddress address = InetAddress.getLocalHost();

      System.out.println(address);
      System.out.println("Hostname: " + address.getHostName());
      System.out.println("Hashed Address: "+ address.hashCode());
      System.out.println("String representation:" + address.toString());
      System.out.println("IP address: " + address.getHostAddress());
      System.out.println("Canonical hostname: " + address.getCanonicalHostName());
      System.out.println(address);

      InetAddress anotherAddress = InetAddress.getByName("www.youtube.com");
      System.out.println("Is equal:" + address.equals(anotherAddress));
    }catch(Exception e){
      
      System.out.println("An error occured");
    }
  }
}