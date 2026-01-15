import java.net.*;

public class InetAddressDifferentMethods {
    public static void main(String[] args) {
        try{
            InetAddress localHost = InetAddress.getLocalHost();
            System.out.println("LocalHostName:" +localHost.getHostName());
            System.out.println("LocalIpAddress:" +localHost.getHostAddress());
           
            InetAddress google = InetAddress.getByName("www.google.com");
            System.out.println("\nGoogle Host name:" +google.getHostName());
            System.out.println("Google Ip Address:" +google.getHostAddress());
            }
            catch(UnknownHostException e){
                System.out.println("Error:" +e.getMessage());

            }
        }
    }

