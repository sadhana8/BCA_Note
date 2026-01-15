/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package overload;

/**
 *
 * @author User
 */
public class Overload {
    Overload(int i, int j, int k)
    {
    int sum=i+j+k;
     System.out.println("Sum:"+sum);
        System.out.println("i am first constructor");
    }

  void  add()
    {
        int a=2;
        int b=4;
       int sum=0;
        sum=a+b;
        System.out.println("Sum:"+sum);
        
    }
  void  add(int i, int j)
    {
       int sum=i+j;
        System.out.println("Sum:"+sum);
        
    }
    void  add(int i, int j, int k)
    {

       
      int  sum= i+j+k;
        System.out.println("Sum:"+sum);
        
    }
    public static void main(String[] args) {
      
       Overload a1=new Overload(2,3,8);
       a1.add();
       a1.add(9,5);
       a1.add(1,6,8);
       
    }
    
}
