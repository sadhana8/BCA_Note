/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package set;

/**
 *
 * @author User
 */
public class Set {

   int a,b;
   void Set(int a,int b)
   {
       this.a=a;
       this.b=b;
   }
   void Sum()
   {
       int total;
       total= a+b;
       System.out.println("Total:"+total);
       
   }
   void diff()
   {
       int total;
       total=a-b;
       System.out.println("Total:"+total);
       
   }
   void mul()
   {
       int total;
       total=a*b;
       System.out.println("Total:"+total);
       
   }
    public static void main(String[] args) {
        // TODO code application logic here
    Set a1=new Set();
    a1.Set(5,6);
    a1.Sum();
    a1.diff();
    a1.mul();
    }
    
}
