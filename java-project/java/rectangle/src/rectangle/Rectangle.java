/*
Write a program to print the area of two rectangles having sides (4,5) and (5,8)
respectively by creating a class named 'Rectangle' with a method named 'Area' which
returns the area and length and breadth passed as parameters to its constructor.
 */
package rectangle;

class Rectangle {
    int lenght;
    int breath;

    Rectangle(int l, int b) {
        this.lenght = l;
        this.breath = b;
    }

    public int area()
    {
        return lenght * breath;
    }


    public static void main(String[] args) {
        Rectangle obj = new Rectangle(4,5);
       Rectangle obj1 = new Rectangle(5,8);

        System.out.println(obj.area());
        System.out.println(obj1.area());





    
    }

}