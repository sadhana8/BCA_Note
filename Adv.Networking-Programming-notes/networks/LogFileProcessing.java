import java.io.*;

public class LogFileProcessing{
    public static void main(String[] args){
        String logfile = "server.log";


        try(BufferedReader br = new BufferedReader(new FileReader(logfile))){
            String line;
            while((line = br.readLine()) != null){
                if(line.contains("200")){
                    System.out.println(line);
                }
            }

        }
        catch(Exception e){
            System.out.println("error processing logfile" +e.getMessage());
        }

    }
}