import java.net.*;
import java.io.*;

public class SocketInfo {
    public static void main(String[] args) {
        //check if any hostname are passed as arguments
        if(args.length == 0){
            System.out.println("Please provide at least one hostname as an argument.");
            return;

        }
        //Iterate over each host passed as argument
        for(String host : args){
            Socket theSocket = null;
            try{
                //create a socket and connect to port 80 (HTTP)
                System.out.println("Attempting to connect to " + host);
                theSocket = new Socket(host,80);

                //Print socket details: remote and local addresses/ports
                System.out.println("Connected to " + theSocket.getInetAddress()
                + "on port " + theSocket.getPort() + "from port"
                + theSocket.getLocalPort() + "of"
                + theSocket.getLocalAddress());
            }catch(UnknownHostException e){
                //Handle case where host can't be found
                System.err.println("I can't find" + host);

            }catch(SocketException ex){
                System.err.println("Could not connect to " + host + ": "+ ex.getMessage());
            }catch(IOException ex){
                System.err.println("I/O error: " + ex.getMessage());
            }finally{
                if(theSocket !=null && !theSocket.isClosed()){
                    //Ensure the socket is closed properly
                    try{
                        
                        theSocket.close();
                        System.out.println("Socket to " +host + "closed successfully.");

                    }catch(IOException ex){
                        System.err.println("Error closing socket: " + ex.getMessage());

                    }
                }
            }
        }
    }
    
}
