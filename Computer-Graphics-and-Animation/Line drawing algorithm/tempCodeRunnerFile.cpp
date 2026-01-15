#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <graphics.h> 

int main() {
   float xi, yi, xf, yf, x, y, m, c;

   printf("Enter initial points (xi yi):\n");
   scanf("%f %f", &xi, &yi);

   printf("Enter final points (xf yf):\n");
   scanf("%f %f", &xf, &yf);

   if (xf == xi) {
       printf("Error: The x-coordinates of the points must not be equal (vertical line).\n");
       return 1;
   }

   m = (yf - yi) / (xf - xi);
   c = yi - m * xi;

   int gd = DETECT, gm;
   initgraph(&gd, &gm, (char*)"");

   putpixel((int)round(xi), (int)round(yi), WHITE);

   x = xi;
   y = yi;

   if (fabs(m) <= 1) {
       while (x < xf) {
           x += 1.0;
           y = m * x + c;
           putpixel((int)round(x), (int)round(y), WHITE);
       }
   } else {
       while (y < yf) {
           y += 1.0;
           x = (y - c) / m;
           putpixel((int)round(x), (int)round(y), WHITE);
       }
   }

   getch();
   closegraph();

   return 0;
}


