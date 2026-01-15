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
//     rectangle(100, 100, 150, 150);
//     flood(110, 110, 7, 0);
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
        flood(x + 1, y, fill_col, old_col);
        flood(x - 1, y, fill_col, old_col);
        flood(x, y + 1, fill_col, old_col);
        flood(x, y - 1, fill_col, old_col);
    }
}

int main()
{
    int gd = DETECT, gm;
    int x, y, fill_col, old_col;

    // Initialize graphics mode
    initgraph(&gd, &gm, (char *)"");

    // Draw a rectangle
    rectangle(100, 100, 150, 150);

    // Input seed point, fill color, and old color
    printf("Enter the seed point (x, y) inside the rectangle: ");
    scanf("%d %d", &x, &y);

    printf("Enter the fill color (e.g., 7 for LIGHTGRAY): ");
    scanf("%d", &fill_col);

    printf("Enter the old color (background color, e.g., 0 for BLACK): ");
    scanf("%d", &old_col);

    // Call the flood fill function
    flood(x, y, fill_col, old_col);

    getch();      // Wait for user input
    closegraph(); // Close graphics mode
    return 0;
}
