import java.net.*;

public class MyAuthenticator  extends Authenticator{
    @Override

    protected PasswordAuthentication getPasswordAuthentication(){
    return new PasswordAuthentication("user", "passwd" .toCharArray());
    }
    
}
