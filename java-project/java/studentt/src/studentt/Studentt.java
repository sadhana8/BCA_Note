/*
 Create a class named 'Student' with String variable 'name' and integer variable 'roll_no'.
Assign and print the roll number, phone number and address of two students having
names "Sam" and "John" respectively by creating two objects of class 'Student'.
 */
package studentt;

public class Studentt {


int RollNumber;
int PhoneNumber;
String Address;

public static void main(String[] args) {
    

Studentt Sam = new Studentt();
Studentt John = new Studentt();
Sam.RollNumber=20;
Sam.PhoneNumber=1234567890;
Sam.Address="London !";
John.RollNumber=01;
John.PhoneNumber=976541230;
John.Address="China !";
System.out.println(Sam.RollNumber+" "+Sam.PhoneNumber+" "+Sam.Address); 
System.out.println(John.RollNumber+" "+John.PhoneNumber+" "+John.Address);
}}