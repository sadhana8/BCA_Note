import java.io.*;
import java.net.*;
import java.nio.charset.StandardCharsets;

public class DictServer {
    public static void main(String[] args) {
        
        String server = "dict.org";  //Dictionay server
        int port = 2628; //DICT protocol port

        try(Socket socket = new Socket(server,port)){
            socket.setSoTimeout(30000);

            //OUTPut and Input streams
            Writer writer= new OutputStreamWriter(socket.getOutputStream(),StandardCharsets.UTF_8);
            BufferedReader reader = new BufferedReader(new InputStreamReader(socket.getInputStream(),StandardCharsets.UTF_8));

            //Read and validate server response
            String serverResponse = reader.readLine();
            if(!serverResponse.startsWith("220")){
                System.err.println("Error: Unexpected response from server:" +serverResponse);
                return;
            }
            //Request available databases
            writer.write("SHOW DB\r\n");
            String line;
            while((line = reader.readLine()) != null){
                if(line.equals("."))
                break; //End of DB list
                System.out.println(line);

            }
            //Word to define
            String word = "gold";
            //send request to define the word

            writer.write("DEFINE fd-eng-lat " + word + "\r\n"); //Use a valid database
            writer.flush();
            //Read and print response

            boolean definitionFound = false;
            while((line = reader.readLine()) != null){
                if(line.startsWith("552")){
                    System.out.println("No definition found for: " +word);
                    break;
                }
                if(line.equals(".")){
                    break;
                }
                if(!line.matches("^\\d{3} .*")){
                    definitionFound = true;
                    System.out.println(line);
                }
            }
            if(!definitionFound){
                System.out.println("No valid definitions returned.");
            }
            //close connection
            writer.write("quit\r\n");
            writer.flush();

        }catch(SocketTimeoutException e){
            System.out.println("Error: Server took too long to respond, Try again later.");
        }catch(IOException e){
            e.printStackTrace();
        }
    }
    
}
