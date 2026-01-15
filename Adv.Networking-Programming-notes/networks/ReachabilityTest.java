import java.net.*;

public class ReachabilityTest {
  public static void main(String[] args){
    try{
      InetAddress google = InetAddress.getByName("www.google.com");
      System.out.println("checking reachability of:" + google.getHostName());
      if(google.isReachable(5000)){
        System.out.println("Host is reached");
      }
      else{
        System.out.println("Host not be reachable");
      }
    }catch(Exception e){
     System.out.println("Error:"+ e.getMessage()); 
    }
  }
}
