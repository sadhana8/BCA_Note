
package registration;



import java.sql.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.*;

public class Registration {

    
     public static void main(String[] args) {
       JFrame f=new JFrame("Registration");
       /////coding//////
       JTextField tf=new JTextField();
       tf.setBounds(50,50,190,25);
        JTextField tf1=new JTextField();
        tf1.setBounds(50,90,190,25);
        JTextField tf2=new JTextField();
        tf2.setBounds(50,130,190,25);
        
        //button
        JButton b=new JButton("Register");
        b.setBounds(50,180,95,30);
        JButton b1=new JButton("Cancel");
        b1.setBounds(150,180,95,30);
        
        f.add(tf);
        f.add(tf1);
        f.add(tf2);
        f.add(b);
        f.add(b1);
        
        ////////////
       f.setLayout(null);
       f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
       f.setSize(600,600);
       f.setVisible(true);
       
       b.addActionListener(new ActionListener()
       {
           public void actionPerformed (ActionEvent e){
                System.out.println("Database will be connected");
                String name1=tf.getText();
                
                String address1=tf1.getText();
                
                String phone1=tf2.getText();
                try{
              Class.forName("com.mysql.jdbc.Driver");
        Connection con = DriverManager.getConnection(
        "jdbc:mysql://localhost:3306/student","root","");
        
        String query = "INSERT INTO registration (name,address,phone) VALUES (?, ?, ?)";
        PreparedStatement st=con.prepareStatement(query);
        st.setString(1, name1);
        st.setString(2, address1);
        st.setString(3, phone1);
        int rowsInserted = st.executeUpdate();
            if (rowsInserted > 0) {
                            System.out.println(" inserted successfully!");
                            }
        
        
        }
        catch(  ClassNotFoundException | SQLException ex){
            System.out.println("not connected");
        }
           }
           
       });
       
       
    }
    
}




