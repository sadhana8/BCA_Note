#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <graphics.h> 

int main() {
    float xi, yi, xf, yf, x, y, m, c, dx, dy, steps, xinc, yinc;

    printf("Enter initial points (xi yi):\n");
    scanf("%f %f", &xi, &yi);

    printf("Enter final points (xf yf):\n");
    scanf("%f %f", &xf, &yf);

    if (xf == xi) {
        printf("Error: The x-coordinates of the points must not be equal (vertical line).\n");
        return 1;
    }

    dx = xf - xi;
    dy = yf - yi;
    m = dy / dx ;

    if(fabs(m) <= 1){
        steps = dx;
    }
    else{
        steps = dy;
    }

    x = xi;
    y = yi;
    xinc = dx / steps;
    yinc = dy / steps;
  
    printf("Steps = %d", (int)steps);
    printf("\nSlope is %f", m);
    printf("\n%-10s %-10s %-10s\n", "x", "y ", "(x, y)");
    printf("%-10.2f %-10.2f (%d, %d)\n", x, y, (int)round(x), (int)round(y));
    
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)"");

    putpixel((int)round(xi), (int)round(yi), WHITE);

    for(int i = 1 ; i <= steps; i++ ){
        x = x + xinc;
        y = y + yinc;
        putpixel((int)round(x), (int)round(y), WHITE);
         printf("%-10.2f %-10.2f (%d, %d)\n", x, y, (int)round(x), (int)round(y));
    }
    getch();
    closegraph();

    return 0;
}

