#include <graphics.h>
#include <stdio.h>

// Define region codes
const int INSIDE = 0; // 0000
const int LEFT = 1;   // 0001
const int RIGHT = 2;  // 0010
const int BOTTOM = 4; // 0100
const int TOP = 8;    // 1000

// Define the clipping window
const int x_min = 100, y_min = 100, x_max = 400, y_max = 300;

// Function to compute the region code for a point (x, y)
int computeCode(int x, int y)
{
    int code = INSIDE;

    if (x < x_min)
        code |= LEFT;
    else if (x > x_max)
        code |= RIGHT;
    if (y < y_min)
        code |= BOTTOM;
    else if (y > y_max)
        code |= TOP;

    return code;
}

// Cohen-Sutherland clipping algorithm
int cohenSutherlandClip(int *x1, int *y1, int *x2, int *y2)
{
    int code1 = computeCode(*x1, *y1);
    int code2 = computeCode(*x2, *y2);
    int accept = 0;

    while (1)
    {
        if ((code1 == 0) && (code2 == 0))
        {
            // Both endpoints are inside the clipping window
            accept = 1;
            break;
        }
        else if (code1 & code2)
        {
            // Both endpoints share an outside region (trivially reject)
            break;
        }
        else
        {
            // At least one endpoint is outside the clipping window
            int code_out;
            int x, y;

            // Choose an endpoint that is outside the clipping window
            if (code1 != 0)
                code_out = code1;
            else
                code_out = code2;

            // Find the intersection point using the formulas:
            if (code_out & TOP)
            {
                x = *x1 + (*x2 - *x1) * (y_max - *y1) / (*y2 - *y1);
                y = y_max;
            }
            else if (code_out & BOTTOM)
            {
                x = *x1 + (*x2 - *x1) * (y_min - *y1) / (*y2 - *y1);
                y = y_min;
            }
            else if (code_out & RIGHT)
            {
                y = *y1 + (*y2 - *y1) * (x_max - *x1) / (*x2 - *x1);
                x = x_max;
            }
            else if (code_out & LEFT)
            {
                y = *y1 + (*y2 - *y1) * (x_min - *x1) / (*x2 - *x1);
                x = x_min;
            }

            // Replace the outside endpoint with the intersection point and update the region code
            if (code_out == code1)
            {
                *x1 = x;
                *y1 = y;
                code1 = computeCode(*x1, *y1);
            }
            else
            {
                *x2 = x;
                *y2 = y;
                code2 = computeCode(*x2, *y2);
            }
        }
    }

    return accept;
}

// Draw the clipping window
void drawClippingWindow()
{
    rectangle(x_min, y_min, x_max, y_max);
    outtextxy(x_min - 50, y_min - 20, (char *)"Clipping Window");
}

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char *)"");

    int x1, y1, x2, y2;

    // Dynamic input for the line segment
    printf("Enter the first endpoint of the line (x1, y1): ");
    scanf("%d %d", &x1, &y1);
    printf("Enter the second endpoint of the line (x2, y2): ");
    scanf("%d %d", &x2, &y2);

    // Original line segment
    setcolor(RED);
    line(x1, y1, x2, y2);
    outtextxy(x1 - 40, y1 - 10, (char *)"Original Line");

    // Draw clipping window
    setcolor(WHITE);
    drawClippingWindow();

    // Clip the line segment
    if (cohenSutherlandClip(&x1, &y1, &x2, &y2))
    {
        setcolor(GREEN);
        line(x1, y1, x2, y2);
        outtextxy(x1 - 40, y1 - 10, (char *)"Clipped Line");
    }
    else
    {
        setcolor(WHITE);
        outtextxy(150, 350, (char *)"Line rejected");
    }

    // Add a delay for better visualization
    delay(5000);

    getch();
    closegraph();

    return 0;
}
