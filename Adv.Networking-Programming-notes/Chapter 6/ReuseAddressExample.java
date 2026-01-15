import java.io.IOException;
import java.net.*;

public class ReuseAddressExample {
    public static void main(String[] args) {
        try{
            //create a server socket
            ServerSocket serverSocket = new ServerSocket();

         //Enable SO_REUSEADDR before binding
         serverSocket.setReuseAddress(true);

         //Bind the socket to port 8080
         serverSocket.bind(new InetSocketAddress(8000));

         System.out.println("Server started on port 8000 with SO_REUSEDADDR enabled.");

         serverSocket.close();
        }catch(IOException e){
            e.printStackTrace();
        }
    }
    
}
