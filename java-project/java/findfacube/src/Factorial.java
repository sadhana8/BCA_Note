import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JPanel;
import javax.swing.JTextField;
 
public class Factorial
 
{
 
     public static void main (String[] args)
 
     {
 
               }
 
}
 

 
 
public class Factorial extends JPanel
 
{
 
         private int factorial; 
 
         private JLabel inputLabel,resultLabel;
 
         private JTextField factorialText;
 
         private JButton factButton;
 
 
 
          //Constructor: sets up main GUI components
 
          public void FactorialPanel(int factorial)
 
          {
 
               this.factorial=factorial;
 
               inputLabel= new JLabel ("Please enter an integer:");
 
               factButton = new JButton("Compute");
 
               TempListener listener=new TempListener();
 
               factButton.addActionListener(listener);
 
               factorialText = new JTextField();
 
               factorialText.addActionListener (new TempListener());
 
               add(inputLabel);
 
               add(factorialText);
 
                   add(factButton);
 
               add(resultLabel);
 
          }
            private int computeFactorial ()
         {
           factorial=Integer.parseInt(factorialText.getText());
 
       int f =1;
 
       for(int i=factorial;i>=1;i--)
 
       {       
 
           f = f*i;
 
       }   
 
       resultLabel.setText(Integer.toString(f));
 
       return f;
            
          }        

    private void add(JLabel inputLabel) {
        throw new UnsupportedOperationException("Not supported yet."); 
    }

    private void add(JTextField factorialText) {
        throw new UnsupportedOperationException("Not supported yet."); 
    }

    private void add(JButton factButton) {
        throw new UnsupportedOperationException("Not supported yet."); 
    }
 
         
 
          private class TempListener implements ActionListener
 
          {
 
           public void actionPerformed(ActionEvent event)
 
           {
               computeFactorial();
 
                }  
 
 
           }
 
      }
 