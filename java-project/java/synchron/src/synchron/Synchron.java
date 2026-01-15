/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package synchron;
class bookticket{
    int totalnoofseat=10;
   synchronized void book(int seats)
    {
        if(totalnoofseat>seats)
        {
            totalnoofseat=totalnoofseat-seats;
            System.out.println(seats+"Ticket Booked");
        }
        else
        {
            System.out.println("Ticket not avaliable");
        }
        
    }
}

public class Synchron extends Thread {
  static  bookticket b1;
  int seats;
     public void run(){
           b1.book(seats);
       }
    public static void main(String[] args) {
        b1=new bookticket();
      Synchron n1=new Synchron();
      n1.seats=8;
      n1.start();
      Synchron n2=new Synchron();
      n2.seats=4;
      n2.start();
      Synchron n3=new Synchron();
      n3.seats=2;
      n3.start();
    }
    
}
