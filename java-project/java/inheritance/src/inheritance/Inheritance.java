/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package inheritance;
class animal{
    int eye;
    int head;
   void eat()
    {
        System.out.println("I am eating");
    }
}
class birds extends animal{
    void fly( )
    
    {
        System.out.println("I am flying");
    }
}

public class Inheritance {

  
    public static void main(String[] args) {
        
        birds b1=new birds();
        b1.eye=2;
        b1.head=1;
        System.out.println("Eyes:"+b1.eye);
        System.out.println("Hhead:"+b1.head);
        b1.fly();
        b1.eat();
        
    }
    
}
