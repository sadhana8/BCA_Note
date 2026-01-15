import java.net.*;
import java.util.*;

/**
 * THEORY:
 * ------------
 * URLConnection provides methods to communicate with a URL and retrieve response headers.
 * 
 * Important Methods:
 * 1. getHeaderFields() - Returns a map of all header fields and their values.
 * 2. getHeaderField(String name) - Returns the value of a specific header field.
 * 
 * This program fetches and displays all headers of a given URL.
 */

public class URLHeaderFields {
    public static void main(String[] args) {
        try {
            // Step 1: Define the URL
            URI uri = new URI("https://www.example.com"); // Replace with a valid URL
            URL url = uri.toURL();

            // Step 2: Open a connection
            URLConnection urlConnection = url.openConnection();

            // Step 3: Retrieve headers
            Map<String, List<String>> headers = urlConnection.getHeaderFields();

            // Step 4: Display headers
            System.out.println("Header Fields:");
            for (Map.Entry<String, List<String>> entry : headers.entrySet()) {
                System.out.println(entry.getKey() + ": " + entry.getValue());
            }

        } catch (Exception e) {
            System.out.println("An error occurred while fetching header fields.");
            e.printStackTrace();
        }
    }
}

/**
 * CONCLUSION:
 * ------------
 * This program demonstrates how to retrieve HTTP response headers using URLConnection.
 * The getHeaderFields() method allows fetching all headers, making it useful for:
 * - Debugging HTTP responses.
 * - Extracting important metadata like content type, date, and server details.
 * - Analyzing API responses.
 */
