//Retrieve connecting server

import java.net.*;

public class ConnectionDetailsExample {
public static void main(String[] args) {
    try{
        //connect to a server (e.g. Google)
        Socket socket = new Socket("www.google.com",80);

        //Retrieve the remote and local socket addresses
        SocketAddress remoteAddress = socket.getRemoteSocketAddress(); //Googl's address
        SocketAddress localAddress = socket.getLocalSocketAddress(); //Local machine's address

        //print the address
        System.out.println("Remote (Server) Address: " + remoteAddress);
        System.out.println("Local (Client) Address: " + localAddress);

        //close the socket
        socket.close();
    }catch(Exception e){
        System.err.println("Error: " + e.getMessage());
    }
}    
}
