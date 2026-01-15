/*
 Write a program to print the area of a rectangle by creating a class named 'Area' taking
the values of its length and breadth as parameters of its constructor and having a method
named 'returnArea' which returns the area of the rectangle. Length and breadth of
rectangle are entered through keyboard.
 */
package areacons;

import java.util.Scanner;

class Areacons{
    int length;
    int breadth;
    A25 1
    reacons(int a, int b)
    {
         length = a;
         breadth = b;
    }
    public int areareturn()
    {
        return length * breadth;
    }



    public static void main(String[] args) {
        Scanner obj = new Scanner(System.in);
        int a,b;
        System.out.println("Enter the lenght of Recatangle");
         a = obj.nextInt();
        obj.nextLine();
        System.out.println("Enter the breadth of Recatangle");
        b = obj.nextInt();
        Areacons ob1 = new Areacons(a,b);
        System.out.println("Area = "+ ob1.areareturn());
    }
}