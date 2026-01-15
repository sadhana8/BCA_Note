/*
 Add two distances in inch-feet by creating a class named 'AddDistance'.
 */
package distance;



import java.util.*;

class Distance

{

double feet , inches;

void getdistance() {
Scanner in = new Scanner(System.in);
System.out.print("Enter feet> ");
feet = in.nextDouble();
System.out.print("Enter inches> ");
inches = in.nextDouble();

}

     void addDistance(Distance d1, Distance d2)

{

double sumofFeet = d1.feet + d2.feet;

double sumofInch = d1.inches + d2.inches;

System.out.println(sumofFeet + " " + sumofInch);

}



public static void main (String[] args)

{

   Distance d1 = new Distance();

   Distance d2 = new Distance();

//Distance d3 = new Distance();

System.out.println("Enter first distance ");

d1.getdistance(); System.out.println("Enter second distance ");

d2.getdistance(); d1.addDistance(d1,d2); //d3.addDistance(d1,d2);

} }