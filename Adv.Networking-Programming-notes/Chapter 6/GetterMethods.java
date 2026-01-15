import java.net.*;


public class GetterMethods {
    public static void main(String[] args) {
        try{
            //Create a socketand connect to a server
            Socket socket = new Socket("www.google.com",80);

            //Get the remote socket address
            InetSocketAddress remoteAddress =(InetSocketAddress) socket.getRemoteSocketAddress();

            //Display information using getter mathods
            System.out.println("Remote Hostname: " + remoteAddress.getHostName());
            System.out.println("Remote IP Address: " + remoteAddress.getAddress());
            System.out.println("Remote Port: " + remoteAddress.getPort());

            //get the local socket address
            InetSocketAddress loaclAddress =(InetSocketAddress) socket.getLocalSocketAddress();

            //Display local connection details
            System.out.println("Loacl Ip Address: " + loaclAddress.getAddress());
            System.out.println("Loacl Port: " + loaclAddress.getPort());

            //close the socket
            socket.close();

        }catch(Exception e){
            System.err.println("Error: " + e.getMessage());

        }
    }
    
}
