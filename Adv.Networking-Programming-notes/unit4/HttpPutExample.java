import java.io.OutputStream;
import java.net.HttpURLConnection;
import java.net.URI;
import java.net.URL;


public class HttpPutExample {
    public static void main(String[] agrs) throws Exception{
        URI uri = new URI("https://jsonplaceholder.typicode.com/posts/1");  //Test API

        URL url = uri.toURL();
        HttpURLConnection conn = (HttpURLConnection) url.openConnection();
        conn.setRequestMethod("PUT");
        conn.setRequestProperty("Content-Type", "application/json");
        conn.setDoOutput(true);


        //JSON data to send

        String jsonInput = "{\"id\":1,\"title\": \"updated title\",\"body\": \"updated body\", \"userId\":1}";

        //write request body

        try(OutputStream os = conn.getOutputStream()){
            os.write(jsonInput.getBytes());
            os.flush();
        }
        //Read response code
        int responseCode = conn.getResponseCode();
        System.out.println("Response Code: " + responseCode);

    }
}
