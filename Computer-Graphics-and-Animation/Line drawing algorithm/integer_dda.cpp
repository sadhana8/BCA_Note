#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <graphics.h> 

int main() {
    int xi, yi, xf, yf, x, y, dx, dy;
    float m;
    int dev = 0;

    printf("Enter initial points (xi yi):\n");
    scanf("%d %d", &xi, &yi);

    printf("Enter final points (xf yf):\n");
    scanf("%d %d", &xf, &yf);

    dx = xf - xi;
    dy = yf - yi;
    m = dy / dx ;

    x = xi;
    y = yi;
  
    printf("\nSlope is %f", m);
    printf("\n%-10s %-10s %-10s %-10s\n", "x", "y ", "dev", "(x, y)");
    printf("%-10d %-10d %-10d (%d, %d)\n", x, y,dev, x, y);
    
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)"");

    putpixel(xi, yi, WHITE);

   if(fabs(m) <= 1){
    while(x <= xf){
        if( dev < 0){
            x = x + 1;
            y = y + 1;
            dev = dev + (dx - dy);

        }
        else{
            x = x + 1;
            dev = dev - dy;
        }
        putpixel(x, y, WHITE);
        printf("%-10d %-10d %-10d (%d, %d)\n", x, y,dev, x, y);
    }
   }
   else
   {
    while(y <= yf){
        if(dev < 0){
            y = y + 1;
            x = x + 1;
            dev = dev + (dy - dx);
        }
        else{
            y = y + 1;
            dev = dev - dx;
        }
         putpixel(x, y, WHITE);
        printf("%-10d %-10d %-10d (%d, %d)\n", x, y,dev, x, y);
    }
   }
    getch();
    closegraph();

    return 0;
}

