import java.io.IOException;
import java.net.InetSocketAddress;
import java.net.SocketOption;
import java.net.StandardSocketOptions;
import java.nio.channels.SocketChannel;
import java.util.Set;

public class SocketOptionsDemo{
    public static void main(String[] args) {
        SocketChannel channel = SocketChannel.open();
        channel.connect(new InetSocketAddress("example.com",80));

        channel.setOption(StandardSocketOptions.SO_KEEPALIVE, true);
        channel.setOption(StandardSocketOptions.TCP_NODELAY, true);
        channel.setOption(StandardSocketOptions.SO_RCVBUF, 16*1024);

        boolean keepAlive = channel.getOption(StandardSocketOptions.SO_KEEPALIVE);
        int recieveBuffer = chhanel.getOption(StandardSocketOptions.SO_RCVBUF);

        System.out.println("SO_KEEPALIVE:" + keepAlive);
        System.out.println("SO_RCVBUF:" + recieveBuffer);


        SetSocketOption<?>> options = chhanel.supportedOptions();
        System.out.println("\n Supported options;");
    }
}