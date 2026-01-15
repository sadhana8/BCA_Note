/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package pkgthis;

/**
 *
 * @author User
 */
public class This {
int a,b;
int Sum(int a,int b)
{
    int total;
    this.a=a;
    this.b=b;
    total=a+b;
    System.out.println("total:"+total);
    return 0;
}
        
    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
       This a1=new This();
       a1.a=5;
       a1.b=6;
       a1.Sum(5, 8);
    }
    
}
