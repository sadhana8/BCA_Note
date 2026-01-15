

package com.mycompany.examplearray;


public class ExampleArray {
    

    public static void main(String[] args) {
        int b[]={5,0,2};
        String a[]={"Ram","Shyam","Hari"};
                try{
                    System.out.println("Name"+a[2]);  
                   
            var div= b[0]/b[1];
              System.out.println("Division"+div);
             
          
                }
                catch(ArrayIndexOutOfBoundsException ex){
                      System.out.println("Index value is greater than array");
                }
                finally{
                      System.out.println("there is an error");
                }
   
       
          
    }
}
