
// #include <stdio.h>
// #include <conio.h>
// #include <graphics.h>
// #include <direct.h>
// void flood(int, int, int, int);
// int main()
// {
//     int gd, gm = DETECT;
//     detectgraph(&gd, &gm);
//     initgraph(&gd, &gm, (char *)"");
//     rectangle(200, 200, 250, 250);
//     flood(220, 220, 7, 0);
//     getch();
//     closegraph();
//     return 0;
// }
// void flood(int x, int y, int fill_col, int old_col)
// {
//     if (getpixel(x, y) == old_col)
//     {
//         delay(10);
//         putpixel(x, y, fill_col);
//         flood(x + 1, y, fill_col, old_col);
//         flood(x - 1, y, fill_col, old_col);
//         flood(x, y + 1, fill_col, old_col);
//         flood(x, y - 1, fill_col, old_col);

//         flood(x + 1, y - 1, fill_col, old_col);
//         flood(x + 1, y + 1, fill_col, old_col);
//         flood(x - 1, y - 1, fill_col, old_col);
//         flood(x - 1, y + 1, fill_col, old_col);
//     }
// }

#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <direct.h>

// Flood fill function
void flood(int x, int y, int fill_col, int old_col)
{
    if (getpixel(x, y) == old_col)
    {
        delay(10);
        putpixel(x, y, fill_col);

        // Recursive calls for 8-connected neighbors
        flood(x + 1, y, fill_col, old_col);     // Right
        flood(x - 1, y, fill_col, old_col);     // Left
        flood(x, y + 1, fill_col, old_col);     // Down
        flood(x, y - 1, fill_col, old_col);     // Up
        flood(x + 1, y - 1, fill_col, old_col); // Top-right diagonal
        flood(x + 1, y + 1, fill_col, old_col); // Bottom-right diagonal
        flood(x - 1, y - 1, fill_col, old_col); // Top-left diagonal
        flood(x - 1, y + 1, fill_col, old_col); // Bottom-left diagonal
    }
}

int main()
{
    int gd = DETECT, gm; // Graphics mode
    int x, y, fill_col, old_col;

    // Initialize graphics mode
    initgraph(&gd, &gm, (char *)"");

    // Draw a rectangle
    rectangle(200, 200, 250, 250);

    // Take user input
    printf("Enter the seed point (x, y) inside the rectangle: ");
    scanf("%d %d", &x, &y);

    printf("Enter the fill color (e.g., 7 for LIGHTGRAY): ");
    scanf("%d", &fill_col);

    printf("Enter the old color (background color, e.g., 0 for BLACK): ");
    scanf("%d", &old_col);

    // Call the flood fill function
    flood(x, y, fill_col, old_col);

    getch();      // Wait for user input before closing the graphics window
    closegraph(); // Close graphics mode
    return 0;
}
