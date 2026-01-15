import javax.swing.*;

import javax.swing.JOptionPane;
import javax.swing.JPasswordField;

public class PasswordInputExample {
    public static void main(String[] args){
    JPasswordField passwordField = new JPasswordField();
    int option = JOptionPane.showConfirmDialog(null,passwordField,"Enter Password",
     JOptionPane.OK_CANCEL_OPTION);


    if(option == JOptionPane.OK_OPTION){
        char[] password = passwordField.getPassword();
        System.out.println("Password entered:" + new String(password)); //Not recommended for real applications
    }
    }

    
}
