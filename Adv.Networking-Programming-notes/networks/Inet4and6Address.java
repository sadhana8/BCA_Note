import java.net.*;

public class Inet4and6Address {
  public static void main(String[] args){
    try{
     InetAddress address = Inet4Address.getByName("www.google.com");
      System.out.println("IPv4 address: " + address.getHostAddress());
      System.out.println("Is Ipv4: " + (address instanceof Inet4Address));

      InetAddress nextAddress = Inet6Address.getByName("ipv6.google.com");
      System.out.println("IPv6 address: " + nextAddress.getHostAddress());
      System.out.println("Is Ipv6: " + (nextAddress instanceof Inet6Address));
    }
    catch(Exception e){
      System.out.println("Error");
    }
    
  }
}
