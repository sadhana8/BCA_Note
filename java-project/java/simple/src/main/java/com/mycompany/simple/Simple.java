///*
// * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
// */
//package com.mycompany.simple;
//
//public class Simple {
//
//    public static void main(String[] args) {
//        int a = 6;
//        int b = 3;
//        try {
//
//            int div;
//            div = a / b;
//            System.out.println("div:" + div);
//
//        } catch (ArithmeticException e) {
//            System.out.println("denominator is zero");
//        }
//        System.out.println("Sum:"(a + b
//    
//
//));
//    }
//}
package com.mycompany.examplearray;


public class ExampleArray {
    

    public static int main(String[] args) {
        int b[]={5,0,2};
        String a[]={"Ram","Shyam","Hari"};
                try{
                    System.out.println("Name"+a[3]);  
                   
            int div= b[0]/b[1];
              System.out.println("Division"+div);
              return 0;
          
                }
                catch(ArrayIndexOutOfBoundsException ex){
                      System.out.println("Index value is greater than array");
                }
                finally{
                      System.out.println("there is an error");
                }
   
       return 0;
          
    }
}
