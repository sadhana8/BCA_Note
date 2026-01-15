#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <graphics.h> 

int main() {
    int xi, yi, xf, yf, x, y, dx, dy, dy2, diff;
    float m;
    int p ;

    printf("Enter initial points (xi yi):\n");
    scanf("%d %d", &xi, &yi);

    printf("Enter final points (xf yf):\n");
    scanf("%d %d", &xf, &yf);

    dx = xf - xi;
    dy = yf - yi;
    dy2 = 2 * dy;
    diff = 2 * dy - 2 * dx;
    m = dy / dx ;
    x = xi;
    y = yi;

    p = dy2 - dx;
  
    printf("\nSlope is %f", m);
    printf("\n%-10s %-10s %-10s %-10s\n", "x", "y ", "p", "(x, y)");
    printf("%-10d %-10d %-10d (%d, %d)\n", x, y,p, x, y);
    

    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)"");

    putpixel(xi, yi, WHITE);

    

   if(fabs(m) <= 1){
    while(x < xf){
        if( p < 0){
            x = x + 1;
            p = p + dy2;

        }
        else{
            x = x + 1;
            y = y + 1;
            p = p + diff;
        }
        putpixel(x, y, WHITE);
        printf("%-10d %-10d %-10d (%d, %d)\n", x, y,p, x, y);
    }
   }
   else
   {
    while(y < yf){
        if(p < 0){
            y = y + 1;
            p = p + dy2;
        }
        else{
            y = y + 1;
            x = x + 1;
            p = p + diff;
        }
         putpixel(x, y, WHITE);
        printf("%-10d %-10d %-10d (%d, %d)\n", x, y,p, x, y);
    }
   }
    getch();
    closegraph();

    return 0;
}

