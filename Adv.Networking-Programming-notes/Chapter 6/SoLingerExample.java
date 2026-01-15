import java.io.*;
import java.net.*;


public class SoLingerExample {
  public static void main(String[] args) {
    try{
      Socket socket = new Socket("example.com",80);
      //Check current SO_LINGER setting
      int lingerTime = socket.getSoLinger();
      System.out.println("Current SO_LINGER: " + lingerTime);

      //Enable SO_LINGER with a timeout of 5 seconds
      if (lingerTime == -1) {
        socket.setSoLinger(true,5);
        System.out.println("SO_LINGER enabled for 5 seconds.");
      }

      //Send some data
      OutputStream out = socket.getOutputStream();
      out.write("Hello".getBytes());

      //Close the socket (waits up to 5 seconds for data to send)
      socket.close();
      System.out.println("Socket Closed");
 
    } catch (IOException e) {
      e.printStackTrace();
    } 
  }  
}
