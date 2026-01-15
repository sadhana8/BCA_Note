
package applet;
import java.applet.Applet;
import java.awt.Graphics;
public class Applets {

public class HelloWorld extends Applets
{
    // Overriding paint() method
    public void paint(Graphics g)
    {
        g.drawString("Hello World", 20, 20);
    }
     
}}
