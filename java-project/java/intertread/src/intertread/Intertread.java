/*
 program with thread problem */
package intertread;
class A extends Thread{
int total=0;
    public void run(){
        for(int i=1 ; i<0;i++)
    {
        total=total+1;
    }
    }
}
public class Intertread {

   
    public static void main(String[] args) {
       A a1=new  A();
       a1.start();
       System.out.println("sum"+a1.total);
    }
    
}
