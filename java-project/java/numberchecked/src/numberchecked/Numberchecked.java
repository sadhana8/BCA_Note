

    

/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package numberchecked;

import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JTextField;


public class Numberchecked {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
         JFrame f=new JFrame("Button Example");  
     JTextField tf=new JTextField();  
    tf.setBounds(50,50, 190,25); 
     
    
    

    JButton b=new JButton("ok");  
    b.setBounds(50,110,95,30);  
    
  
    
    JLabel l2=new JLabel("RESULT");
    l2.setBounds(150,110,95,30); 
    ///////////save button
   
      b.addActionListener(new ActionListener()
        {  
        public void actionPerformed(ActionEvent e)
            {  
            String num1=tf.getText();
        int num11=Integer.parseInt(num1);
        if(num11%2==0){
            l2.setText("Even");
        }
            else{
            l2.setText("Odd");
        }
        
      
            }  
    });
    f.add(tf);
   

   
  
    f.add(b);
    f.add(tf);  
    
    
    f.setSize(400,400);  
    f.setLayout(null);  
    f.setVisible(true);   
    f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE); 
    }
    
}