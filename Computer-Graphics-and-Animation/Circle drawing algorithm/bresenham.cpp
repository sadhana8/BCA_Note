#include <stdio.h>
#include <graphics.h>

void PlotCirclePoint(int xc, int yc, int x, int y)
{
    putpixel(x + xc, y + yc, WHITE);
    putpixel(y + xc, x + yc, WHITE);
    putpixel(-y + xc, x + yc, WHITE);
    putpixel(-x + xc, y + yc, WHITE);
    putpixel(-x + xc, -y + yc, WHITE);
    putpixel(-y + xc, -x + yc, WHITE);
    putpixel(y + xc, -x + yc, WHITE);
    putpixel(x + xc, -y + yc, WHITE);
}

int main()
{
    int xc, yc, r, x = 0, y, p;

    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char *)"");

    printf("\nEnter the radius of the circle: ");
    scanf("%d", &r);
    printf("\nEnter the center of the circle (xc yc): ");
    scanf("%d%d", &xc, &yc);

    y = r;
    p = 3 - 2 * r;

    printf("x\ty\tp\t(x, y)\t\t(x+xc, y+yc)\n");
    printf("%d\t%d\t%d\t(%d, %d)\t(%d, %d)\n", x, y, p, x, y, x + xc, y + yc);

    PlotCirclePoint(xc, yc, x, y);

    while (x < y)
    { // Change here: x < y instead of x <= y
        if (p < 0)
        {
            x = x + 1;
            p = p + 4 * x + 6;
        }
        else
        {
            x = x + 1;
            y = y - 1;
            p = p + 4 * (x - y) + 10;
        }
        printf("%d\t%d\t%d\t(%d, %d)\t(%d, %d)\n", x, y, p, x, y, x + xc, y + yc);
        PlotCirclePoint(xc, yc, x, y);
    }

    getch();
    closegraph();
    return 0;
}