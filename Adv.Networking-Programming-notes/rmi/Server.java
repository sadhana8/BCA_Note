import java.rmi.registry.LocateRegistry;
import java.rmi.registry.Registry;

public class Server {
    public static void main(String[] args) {
        try {
            HelloImpl obj = new HelloImpl();

            // Starts registry programmatically
            Registry registry = LocateRegistry.createRegistry(1099);

            // Binds the remote object
            registry.rebind("HelloService", obj);

            System.out.println("Server ready...");
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}
