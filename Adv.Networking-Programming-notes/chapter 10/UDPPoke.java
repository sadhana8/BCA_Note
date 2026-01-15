import java.net.*;

public class UDPPoke {
    public static byte[] poke(InetAddress host, int port){
        byte[] response = null;
        try (DatagramSocket socket = new DatagramSocket()){
            socket.setSoTimeout(3000);

            byte[] data = { 0 };
            DatagramPacket packet = new DatagramPacket(data,data.length,host,port);
            socket.send(packet);

            byte[] buffer = new byte[8192];
            DatagramPacket incoming = new DatagramPacket(buffer, buffer.length);
            socket.receive(incoming);

            int length = incoming.getLength();
            response = new byte[length];
            System.arraycopy(buffer, 0, response, 0, length);
        }catch(Exception e){
            System.err.println(e);
        }
        return response;
    }
    public static void main(String[] args) throws Exception{
        if(args.length !=2){
            System.out.println("Usage: java UDPPoke <host> <port>");
            return;
        }
        InetAddress host = InetAddress.getByName(args[0]);
        int port = Integer.parseInt(args[1]);

        byte[] response = poke(host, port);
        if(response != null){
            String result = new String(response, "US_ASCII");
            System.out.println("Response: " + result);
        }else{
            System.out.println("No response received.");
        }
    }
}
