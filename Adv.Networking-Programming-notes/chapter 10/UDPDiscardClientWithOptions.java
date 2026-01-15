import java.net.*;
import java.io.*;

public class UDPDiscardClientWithOptions {
    public static final int SERVER_PORT = 9999;
    public static final String SERVER_ADDRESS = "localhost";

    public static void main(String[] args) {
        try(DatagramSocket clientSocket = new DatagramSocket()){

            clientSocket.setSoTimeout(5000);
            clientSocket.setSendBufferSize(4096);
            clientSocket.setBroadcast(true);
            clientSocket.setTrafficClass(0xBB);
        
            InetAddress serverAddress = InetAddress.getByName(SERVER_ADDRESS);

            clientSocket.connect(serverAddress, SERVER_PORT);

            String message = "Hello, UDP Server!";
            byte[] buffer = message.getBytes();
            DatagramPacket packet = new DatagramPacket(buffer, buffer.length);

            clientSocket.send(packet);
            System.out.println("Message sent to " + serverAddress + ":" + SERVER_PORT);
        }catch(IOException e){
            e.printStackTrace();
        }
    }
}
