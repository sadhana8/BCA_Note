/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package quardeticeqn;

import java.util.Scanner;


public class Quardeticeqn {

  
    public static void main(String[] args) {
        double root1;
        double root2;
        Scanner in=new Scanner(System.in);
        System.out.println("Enter the value of a,b and c");
      double  a=in.nextDouble;
       double b=in.nextDouble;
       double c=in.nextDouble;
       double d=b*b-4*a*c;
       
       if(a==0)
       { 
           System.out.println("the answer is invalid");
       }
       else if(d >=0)
       {
           root1=(-b+Math.sqrt( d/(2*a)));
            root2=(-b-Math.sqrt( d/(2*a)));  
            System.out.println("The answer are"+root1+root2);
       }
       else{
           root1=(-b+Math.sqrt( -d/(2*a)));
            root2=(-b-Math.sqrt( -d/(2*a)));  
            System.out.println("The answer are in imaginary "+root1);

       }
    
    }
    
}
