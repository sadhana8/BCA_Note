/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package constructor;

/**
 *
 * @author User
 */
public class Constructor {

    int i,j;
   Constructor(int i,int j)
    {
        this.i=i;
        this.j=j;
        
    }
    int add()
    {
        int sum = i+j;
        System.out.println("sum:"+sum);
        return 0;
    }
    public static void main(String[] args) {
        Constructor a1=new  Constructor(8,5);
        a1.add();
    }
    
}
