
package factorialjava;
import javax.swing.*;
import java.awt.EventQueue;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;


public class Factorialjava {

   
    public static void main(String[] args) {

JFrame f1=new JFrame();

//puting data
JLabel l1=new JLabel("Number:");
l1.setBounds(50, 100, 100, 20);

JTextField t1=new JTextField();
t1.setBounds(150, 100, 100, 20);

JButton b1=new JButton("Factorial");
b1.setBounds(50, 150, 100, 20);

JButton b2=new JButton("Cube");
b2.setBounds(50, 180, 100, 20);

JLabel l2=new JLabel("");
l2.setBounds(200, 150, 100, 20);

JLabel l3=new JLabel("");
l3.setBounds(200, 180, 100, 20);
///////
//code for click factoril Action Listiner
b1.addActionListener(new ActionListener()

{

        public void actionPerformed(ActionEvent e)
        {
         String a;int i;int fact=1;
            a=t1.getText();
            int num;
            num=Integer.parseInt(a);
         
            //////factorial code
            
            for(i=1;i<num+1;i++)
                {
                    
                        fact=fact*i ;
                    } 
            a=Integer.toString(fact);
            l2.setText(a);
             l3.setText(a);
         /////////
         }
       

});


///////////////
//////////////code for cube action listener
b2.addActionListener(new ActionListener()

{

        public void actionPerformed(ActionEvent e)
        {
         String b;
         int cube;
            b=t1.getText();
            int num;
            num=Integer.parseInt(b);
         
            //////cube code
            cube=num*num*num;
           
               
            b=Integer.toString(cube);
            
             l3.setText(b);
        }
         /////////
         
       

});
//////////////
//adding components to frame
f1.add(l1);
f1.add(t1);
f1.add(b1);
f1.add(b2);
f1.add(l2);
f1.add(l3);

f1.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
f1.setSize(600,600);
f1.setLayout(null);
f1.setVisible(true);

    }
    
}
