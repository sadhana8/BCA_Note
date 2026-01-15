import java.io.*;
import java.net.*;

public class ReadFromServer{
    public static void main(String[] args){
        String somehost = "example.com";
        int someport = 80;

        try{
            //connect to the server
            Socket socket = new Socket( somehost, someport);

            //Set up input (reading) and output (writting) streams

            BufferedReader reader = new BufferedReader(new InputStreamReader(socket.getInputStream()));
            PrintStream pstream = new PrintStream(socket.getOutputStream());

            //send an HTTP GET request
            pstream.println("GET / HTTP/1.1");
            pstream.println("Host:" + somehost);
            pstream.println("Connection: close"); //close connection after response

            pstream.println();

            //Read and print the server response
             String line;
             while((line = reader.readLine()) !=null){
                System.out.println(line);
             }
             //Close the socket
             socket.close();
        }catch(Exception e){
            e.printStackTrace();
        }
    }
}