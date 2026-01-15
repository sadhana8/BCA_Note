import java.io.*;
import java.net.*;

public class SoTimeoutExample {
  public static void main(String[] args) {
    try{
      Socket socket = new Socket("example.com",80);

      //Get the current timeout value
      int currentTimeout = socket.getSoTimeout();
      System.out.println("Currnet SO_TIMEOUT: " + currentTimeout + " ms");

      //Set timeout to 3 minutes if not already set
      if (currentTimeout == 0) {
        socket.setSoTimeout(180000); //180,000 ms = 3 minutes
        System.out.println("SO_TIMEOUT set to 3 minutes.");
      }

      // Try to read data with the timeout
      InputStream in = socket.getInputStream();
      try {
        int data = in.read(); // This waits for data but not longer than SO_TIMEOUT
        System.out.println("Data received: " + data);
      } catch (InterruptedIOException e) {
        System.out.println("Read timed out! No data recieved within the timeout.");


      }

      // The socket remains open, so you can try reading again
    } catch (IOException e) {
      e.printStackTrace();
    }
  }
  
}
