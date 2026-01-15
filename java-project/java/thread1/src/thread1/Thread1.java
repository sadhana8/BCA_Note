/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package thread1;


public class Thread1 {


public class ExampleClass implements Runnable {  
  
      
    public void run() {  
        System.out.println("Thread has ended");  
    }  
   
    public static void main(String[] args) {  
        ExampleClass ex = new ExampleClass();  
        Thread1 t1= new Thread1(ex);  
        t1.start();  
        System.out.println("Hi");  
    }  
}  
    }
    

