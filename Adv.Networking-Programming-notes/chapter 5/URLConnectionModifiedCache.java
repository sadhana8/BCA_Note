import java.net.*;
import java.util.Date;

/**
 * THEORY:
 * ------------
 * URLConnection provides methods to optimize network requests:
 * 
 * 1. setIfModifiedSince(long milliseconds) - Sends a request only if the resource was modified after the given timestamp.
 * 2. getIfModifiedSince() - Retrieves the set timestamp for conditional requests.
 * 3. setUseCaches(boolean flag) - Enables or disables caching for repeated requests.
 * 4. getUseCaches() - Checks if caching is enabled.
 * 
 * This program demonstrates the use of these methods to fetch web content efficiently.
 */

public class URLConnectionModifiedCache {
    public static void main(String[] args) {
        try {
            // Step 1: Define the URL
            URI uri = new URI("https://www.example.com"); // Replace with a valid URL
            URL url = uri.toURL();

            // Step 2: Open a connection
            URLConnection urlConnection = url.openConnection();

            // Step 3: Set If-Modified-Since (Example: 24 hours ago)
            long oneDayAgo = System.currentTimeMillis() - (24 * 60 * 60 * 1000);
            urlConnection.setIfModifiedSince(oneDayAgo);

            // Step 4: Enable caching
            urlConnection.setUseCaches(true);

            // Step 5: Fetch metadata and display
            System.out.println("If-Modified-Since: " + new Date(urlConnection.getIfModifiedSince()));
            System.out.println("Use Caches: " + urlConnection.getUseCaches());
            System.out.println("Last Modified: " + new Date(urlConnection.getLastModified()));

        } catch (Exception e) {
            System.out.println("An error occurred while fetching the data.");
            e.printStackTrace();
        }
    }
}

/**
 * CONCLUSION:
 * ------------
 * This program demonstrates how to use If-Modified-Since and UseCaches methods to reduce 
 * unnecessary network requests. By using these techniques, we can:
 * - Improve performance by avoiding redundant downloads.
 * - Optimize bandwidth usage.
 * - Check whether the resource has changed before fetching it again.
 */
