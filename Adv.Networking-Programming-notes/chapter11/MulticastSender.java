import java.io.IOException;
import java.net.*;

public class MulticastSender {
  public static void main(String[] args) throws IOException, InterruptedException {
    String groupAddress = "224.0.0.1";
    int port = 8888;

    InetAddress group = InetAddress.getByName(groupAddress);

    try (MulticastSocket socket = new MulticastSocket()) {
      socket.setTimeToLive(1);
      String message = "Hello from multicast sender!";
      byte[] buffer = message.getBytes();

      DatagramPacket packet = new DatagramPacket(buffer, buffer.length, group, port);

      //Optional wait to ensure receiver is ready
      Thread.sleep(2000);

      socket.send(packet);
      System.out.println("Multiccast message sent.");
    }
  }  
}
