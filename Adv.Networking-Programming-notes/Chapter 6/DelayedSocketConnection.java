
import java.io.*;
import java.net.*;

public class DelayedSocketConnection {
    public static void main(String[] args) {
        //Create a socket without connecting immediately

        Socket socket = new Socket();
        SocketAddress address = new InetSocketAddress("time.nist.gov",13);
      
        try{
            //connect to the time server with a 5-second timeout
            System.out.println("Connecting to the time server...");
           socket.connect(address,5000);
            System.out.println("Connected");

            //Set up input stream to read server response
            BufferedReader reader = new BufferedReader(new InputStreamReader(socket.getInputStream()));
     //Read and displaty the time from the server
      String serverTime;
      while((serverTime = reader.readLine()) != null){
        System.out.println("Server Time: " + serverTime);
      }
      //close resource
      reader.close();
      socket.close();
        }catch(Exception e){
            System.err.println("Connection failed:" +e.getMessage());
        }
    }
}
