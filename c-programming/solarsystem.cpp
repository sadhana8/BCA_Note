<<<<<<< HEAD
#include <stdio.h>
#include <graphics.h>
#include <math.h>
#include <time.h>

#define PI 3.14159

double gettime() {
    return (double)time(NULL);
}
int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // Define planet properties (radius, distance from sun, orbit speed)
    int planetRadius[8] = {10, 15, 20, 25, 30, 35, 40, 45};
    int planetDistance[8] = {50, 100, 150, 200, 250, 300, 350, 400};
    float planetSpeed[8] = {0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8};

    // Draw the sun
    setcolor(YELLOW);
    circle(320, 240, 50);

    // Draw the planets
    for (int i = 0; i < 8; i++) {
        setcolor(i % 2 == 0 ? RED : GREEN);
        circle(320 + planetDistance[i], 240, planetRadius[i]);
    }

    // Animate the planets
    while (!kbhit()) {
        for (int i = 0; i < 8; i++) {
            // Calculate the planet's new position based on its orbit speed
            int x = 320 + planetDistance[i] * cos(planetSpeed[i] * gettime());
            int y = 240 + planetDistance[i] * sin(planetSpeed[i] * gettime());

            // Clear the planet's previous position
            setcolor(BLACK);
            circle(320 + planetDistance[i], 240, planetRadius[i]);

            // Draw the planet at its new position
            setcolor(i % 2 == 0 ? RED : GREEN);
            circle(x, y, planetRadius[i]);
        }
    }

    getch();
    closegraph();
    return 0;
}
=======
#include <stdio.h>
#include <graphics.h>
#include <math.h>
#include <time.h>

#define PI 3.14159

double gettime() {
    return (double)time(NULL);
}
int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // Define planet properties (radius, distance from sun, orbit speed)
    int planetRadius[8] = {10, 15, 20, 25, 30, 35, 40, 45};
    int planetDistance[8] = {50, 100, 150, 200, 250, 300, 350, 400};
    float planetSpeed[8] = {0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8};

    // Draw the sun
    setcolor(YELLOW);
    circle(320, 240, 50);

    // Draw the planets
    for (int i = 0; i < 8; i++) {
        setcolor(i % 2 == 0 ? RED : GREEN);
        circle(320 + planetDistance[i], 240, planetRadius[i]);
    }

    // Animate the planets
    while (!kbhit()) {
        for (int i = 0; i < 8; i++) {
            // Calculate the planet's new position based on its orbit speed
            int x = 320 + planetDistance[i] * cos(planetSpeed[i] * gettime());
            int y = 240 + planetDistance[i] * sin(planetSpeed[i] * gettime());

            // Clear the planet's previous position
            setcolor(BLACK);
            circle(320 + planetDistance[i], 240, planetRadius[i]);

            // Draw the planet at its new position
            setcolor(i % 2 == 0 ? RED : GREEN);
            circle(x, y, planetRadius[i]);
        }
    }

    getch();
    closegraph();
    return 0;
}
>>>>>>> 18eab0e4d506445091916fd87bb0bbb624841542
