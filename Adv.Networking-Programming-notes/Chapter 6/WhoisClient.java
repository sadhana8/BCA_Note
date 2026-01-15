import java.io.*;
import java.net.*;

public class WhoisClient {
    private static final String WHOIS_SERVER = "whois.internic.net"; //default whois  server
    private static final int WHOIS_PORT = 43; //Whois servers listen on port

    public static void main(String[] args) {
    if(args.length !=1){
        System.out.println("Usage: java WhoisClient <domain or IP> ");
        return;
    }
    String query = args[0];

    try(Socket socket = new Socket(WHOIS_SERVER, WHOIS_PORT);
    OutputStream output = socket.getOutputStream();
    InputStream input = socket.getInputStream();
    BufferedReader reader = new BufferedReader(new InputStreamReader(input))){
        //send the query followed by CRLF (\r\n)
        output.write((query + "\r\n").getBytes());
        output.flush();

        //Read and display the response
        String line;
        while((line = reader.readLine()) !=null){
            System.out.println(line);
        }
        }
        catch(IOException e){
            System.err.println("Error: " +e.getMessage());
        }
    }

   } 

