import java.io.*;
import java.net.*;

/**
 * THEORY:
 * ------------
 * URLConnection is an abstract class in Java that provides a way to read and write data to a URL.
 * It is part of the java.net package and is useful for establishing a connection with a web server.
 *
 * Steps to use URLConnection:
 * 1. Create a URL object with the desired web address.
 * 2. Open a connection to the URL using the openConnection() method.
 * 3. Retrieve input stream from the connection to read data.
 * 4. Process the data as required.
 * 5. Close the input stream to release resources.
 *
 * This program demonstrates reading data from a web server using URLConnection.
 */

public class URLConnectionExample {
    public static void main(String[] args) {
        try {
            // Step 1: Define the URL (example: fetching data from a website)
            URI uri = new URI("https://www.example.com");
            URL url = uri.toURL();

            // Step 2: Open a connection
            URLConnection urlConnection = url.openConnection();

            // Step 3: Create a BufferedReader to read the response
            BufferedReader reader = new BufferedReader(new InputStreamReader(urlConnection.getInputStream()));

            String line;

            // Step 4: Read and display the data line by line
            System.out.println("Data from server:");
            while ((line = reader.readLine()) != null) {
                System.out.println(line);
            }

            // Step 5: Close the reader
            reader.close();

        } catch (Exception e) {
            System.out.println("An error occurred while reading data from the server.");
            e.printStackTrace();
        }
    }
}

/**
 * CONCLUSION:
 * ------------
 * This program successfully demonstrates how to establish a connection with a web server
 * and retrieve data using the URLConnection class in Java. By following the structured
 * steps, we can fetch and process online content efficiently. This method is useful in 
 * web scraping, API communication, and fetching online resources dynamically.
 */
