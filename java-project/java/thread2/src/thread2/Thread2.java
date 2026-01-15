
package thread2;

class A{
   
    public void run(){
for (int i=0;i<1000;i++)
{
    System.out.println("I="+i);
}
}

}
class C extends Thread{
public void run(){
for (int k=0;k<1000;k++)
{
    System.out.println("k="+k);
}
}

}

class B extends Thread {

public void run(){
for (int j=0;j<1000;j++)
{
    System.out.println("j="+j);
}
}

}
  
public class Thread2 {

   
    public static void main(String[] args) {
        A a1=new A();
        B b1=new B();
        C c1=new C();
       a1.A();
    }
    }

    

