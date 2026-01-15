import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.net.HttpURLConnection;
import java.net.URL;
import java.net.URI;
import java.net.URLEncoder;


public class GetRequestExample {
    public static void main(String[] args){
        try{

            //Base URL of the server-side program (change this to an actual API)
            String baseUrl1 = "https://jsonplaceholder.typicode.com/users";

            //Query parameters (encode then properly)
            String param1 = URLEncoder.encode("value1","UTF-8");
            String param2 = URLEncoder.encode("value2","UTF-8");

         //construct the full URL with query parameteres
            String fullUrl = baseUrl1 + "?param1=" + param1 + "&param2=" + param2;

            //Create a URL object
            URI uri = new URI(fullUrl);
            URL url = uri.toURL();

       //open a connection
       HttpURLConnection connection = (HttpURLConnection) url.openConnection();
       connection.setRequestMethod("GET");  //Specify GET method

       //optional: set request headers
       connection.setRequestProperty("User-Agent", "Mozilla/5.0");

       //Get the response code
       int responseCode = connection.getResponseCode();
       System.out.println("Response Code:" + responseCode);

       //Read response data
       BufferedReader in = new BufferedReader(new InputStreamReader(connection.getInputStream()));
       String inputLine;
       StringBuilder response = new StringBuilder();


       while ((inputLine = in.readLine()) != null){
        response.append(inputLine);
       }
        in.close();

        //print the response
        System.out.println("Response from server:" + response.toString());
        
        }
        catch(Exception e){
            e.printStackTrace();
        }
    }
    
}
