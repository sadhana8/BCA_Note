#include <stdio.h>
#include <graphics.h> // for using graphics functions in C

void drawLine(int x1, int y1, int x2, int y2) {
    int dx, dy, p, x, y;
    dx = x2 - x1;  // Change in x
    dy = y2 - y1;  // Change in y

    // Set initial point (x, y)
    x = x1;
    y = y1;

    // Determine the decision parameter (p)
    p = 2 * dy - dx;

    // Plot the starting point
    putpixel(x, y, WHITE);

    // Draw the line
    while (x < x2) {
        x++;
        if (p < 0) {
            p = p + 2 * dy;  // Only move horizontally
        } else {
            y++;              // Move vertically
            p = p + 2 * (dy - dx);  // Correct the error term
        }
        putpixel(x, y, WHITE);  // Plot the next point
    }
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");  // Initialize graphics mode

    // Example points for the line
    int x1 = 100, y1 = 100, x2 = 300, y2 = 200;  // Line coordinates
    drawLine(x1, y1, x2, y2);  // Call function to draw the line

    getch();  // Wait for user input before closing the graphics window
    closegraph();  // Close the graphics mode

    return 0;
}


