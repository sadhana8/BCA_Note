package everestdb;

import java.sql.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JTextField;

public class Everestdb {

    
    public static void main(String[] args) {
   JFrame f1=new JFrame("Database connection");
   
   JTextField tf=new JTextField();
   tf.setBounds(50,50,190,30);
   
     JTextField tf2=new JTextField();
      tf2.setBounds(50,80,190,25);
      
      JButton b=new JButton("save");
      b.setBounds(50,110,95,30);
      
      f1.add(tf);
      f1.add(tf2);
      f1.add(b);
      f1.setLayout(null);
      f1.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
      f1.setSize(600,600);
      f1.setVisible(true);
      
      b.addActionListener (new ActionListener ()
      {
          public void actionPerformed (ActionEvent e){
          System.out.println("Database will be connection");
         try{    
                    Class.forName("com.mysql.jdbc.Driver");
          Connection con = DriverManager.getConnection(
        "jdbc:mysql://localhost:3306/bca1","root","");
        Statement st = con.createStatement();
        String query = "INSERT INTO "
                + "marks(id,java) "
                + "VALUES(0,20)";
        st.execute(query);
        System.out.println("value inserted");
                }
                catch(Exception ex){
                     
                }
      }
              
      });
   
   
   
    }
    
}
