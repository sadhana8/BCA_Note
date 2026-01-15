import java.net.*;
public class ReconnectExample {
    public static void main(String[] args) {
        try{
            Socket socket = new Socket("www.yahoo.com", 80);

            SocketAddress yahooAddress = socket.getRemoteSocketAddress();
            System.out.println("Connected to: " + yahooAddress);

            //close the initial connection
            socket.close();

            //create a new socket and reconnect using the saved address
            Socket socket2 = new Socket();
            socket2.connect(yahooAddress); //Reconnect to Yahoo using the saved address
            System.out.println("Reconnected to: "+ yahooAddress);

            //close the second connection
            socket2.close();
        }catch(Exception e){
            System.err.println("Error: " +e.getMessage());
        }
    }
}
