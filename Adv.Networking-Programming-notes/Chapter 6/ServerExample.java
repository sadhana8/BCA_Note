import java.net.*;

public class ServerExample {
    public static void main(String[] args) {
       //Binding a server to a port (e.g. 8000)
       InetSocketAddress serverAddress = new InetSocketAddress(8000);
       System.out.println("Server will Listen on: " + serverAddress);
    }
}
