#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <direct.h>

// Function to perform 4-connected Boundary Fill
void boundary_fill(int x, int y, int fcolor, int bcolor)
{
    if ((getpixel(x, y) != bcolor) && (getpixel(x, y) != fcolor))
    {
        delay(10);                               // To visualize the filling process
        putpixel(x, y, fcolor);                  // Fill the pixel
        boundary_fill(x + 1, y, fcolor, bcolor); // Right
        boundary_fill(x - 1, y, fcolor, bcolor); // Left
        boundary_fill(x, y + 1, fcolor, bcolor); // Down
        boundary_fill(x, y - 1, fcolor, bcolor); // Up
    }
}

int main()
{
    int x, y, fcolor, bcolor;
    int gd = DETECT, gm;

    // Initialize graphics mode
    initgraph(&gd, &gm, (char *)"");

    // Input the seed point and colors
    printf("Enter the seed point (x, y) for a circle (200,200,45): ");
    scanf("%d %d", &x, &y);
    printf("Enter boundary color: ");
    scanf("%d", &bcolor);
    printf("Enter new color: ");
    scanf("%d", &fcolor);

    // Draw a circle
    circle(200, 200, 45);

    // Call the boundary fill function
    boundary_fill(x, y, fcolor, bcolor);

    getch();      // Wait for user input
    closegraph(); // Close graphics mode
    return 0;
}
