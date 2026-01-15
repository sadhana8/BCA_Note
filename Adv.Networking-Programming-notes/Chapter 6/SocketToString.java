import java.io.IOException;
import java.net.Socket;

public class SocketToString {
  public static void main(String[] args) {
    try{
      //Connect to a website on port 80 (HTTP)
      Socket socket = new Socket("www.oreilly.com",80);

      //Print socket details using toString()
      System.out.println(socket.toString());

      //Close the socket
      socket.close();

    } catch (IOException e) {
      System.out.println("Error: " + e.getMessage());
    }
  }
}