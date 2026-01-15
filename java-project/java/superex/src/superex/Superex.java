/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package superex;


class A
{
    int i;
  
}
    class B extends A{
        int i=9;
        B(int a){
          System.out.println("a"+a)
             super.i=a;
      
       
void display(){
    System.out.println("this is age"+a);
}
    
        }   
   
public class Superex {
    public static void main(String[] args) {
       A a1=new A();
        a1.i = 25;
        a1.display();
      
       
    }
    
}