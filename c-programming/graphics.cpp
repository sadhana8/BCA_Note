<<<<<<< HEAD
//circle graphics
//#include<stdio.h>
//#include<conio.h>
//#include<graphics.h>
//#include<dos.h>
//int main()
//{
//	int gd=DETECT,gm;
//	int i;
//	initgraph(&gd,&gm,"c:\tc\\bgi");
//	for(i=0;i<500;i++)
//	{
//		setcolor(i);
//		//coordinates of center from x axis, y axis, radius
//		circle(300,250,20+i);
//		delay(80);
//	}
//	getch();
//	closegraph();
//}

//Draw a line
//#include<stdio.h>
//#include<conio.h>
//#include<graphics.h>
//#include<dos.h>
//int main()
//{
//	int gd=DETECT,gm;
//	int x1=200,y1=200;
//	int x2=300,y2=300;
//	initgraph(&gd,&gm,"c:\tc\\bgi");
//line(x1,y1,x2,y2);
//	getch();
//	closegraph();
//}
//draw a simple circle
//#include<stdio.h>
//#include<conio.h>
//#include<graphics.h>
//#include<dos.h>
//int main()
//{
//	int gd=DETECT,gm;
//	initgraph(&gd,&gm,"c:\tc\\bgi");
//		circle(150,150,100);
//		getch();
//	closegraph();
//}

//draw a simplerectangle
//#include<stdio.h>
//#include<conio.h>
//#include<graphics.h>
//#include<dos.h>
//int main()
//{
//	int gd=DETECT,gm;
//	initgraph(&gd,&gm,"c:\tc\\bgi");
//		rectangle(50,50,300,350);
//	getch();
//	closegraph();
//}

//Hut Graphics
//#include<conio.h>
//#include<graphics.h>
//int main()
//{
//	int gd = DETECT,gm;
//	initgraph(&gd,&gm,"c:\\tc\\bgi");
//	/*Draw Hut*/
//	setcolor(WHITE);
//	rectangle(150,180,250,300);
//	rectangle(250,180,420,300);
//	rectangle(180,250,220,300);
//
//	line(200,100,150,180);
//	line(200,100,250,180);
//	line(200,100,370,100);
//	line(370,100,420,180);
//	/*Fill Color*/
//	setfillstyle(SOLID_FILL,BROWN);
//	floodfill(152,182,WHITE);
//	floodfill(252,182,WHITE);
//	setfillstyle(SLASH_FILL,RED);
//	floodfill(182,252,WHITE);
//	setfillstyle(HATCH_FILL,GREEN);
//	floodfill(200,105,WHITE);
//	floodfill(210,105,WHITE);
//	getch();
//	closegraph();
//	return 0;
//	
//}

//Drawing Shapes(Line,Circle,Bar,Rectangle,Ellipse)

//#include<conio.h>
//#include<graphics.h>
//int main()
//{
//	int gd = DETECT,gm;
//	initgraph(&gd,&gm,"c:\\tc\\bgi");
//	rectangle(200,100,150,120); //Drawing rectangle
//	circle(300,300,20); //Drawing circle
//	bar(100,190,150,50); //Drawing Bar
//	line(150,140,50,100); //Drawing line
//	ellipse(500,550,203,60,100,50); //Ellipse
//	
//	//writing text at a position
//	outtextxy(10,25,"Graphics program");
//	getch();
//	closegraph();
//	return 0;
//}

//rectangle with color
//#include<stdio.h>
//#include<conio.h>
//#include<graphics.h>
//int main()
//{
//	int gd=DETECT,gm;
//	initgraph(&gd,&gm,"c:\tc\\bgi");
//	setcolor(0);
//		rectangle(150,150,300,350);
//	getch();
//	closegraph();
//}
//moving car example

//#include<stdio.h>
//#include<conio.h>
//#include<graphics.h>
//#include<dos.h>
//int main()
//{
//	int gd = DETECT,gm;
//	int i,j=0;
//	initgraph(&gd,&gm,"c:\\tc\\bgi");
//	setviewport(0,0,539,440,1);
//	for(i=0;i<=420;i=i+10,j++){
//		rectangle(50+i,275,150+i,400);
//		rectangle(150+i,350,200+i,400);
//		circle(75+i,410,10);
//		circle(175+i,410,10);
//		setcolor(j);
//		delay(600);
//		if(i==420)
//		break;
//		clearviewport();
//	}
//	getch();
//	closegraph();
//	return 0;
//}
//	

//program for creating fish

//#include<stdio.h>
//#include<conio.h>
//#include<dos.h>
//#include<graphics.h>
//#include<ctype.h>
//int main(){
//	int gd=DETECT,gm;
//	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
//	cleardevice();
//	ellipse(520,200,30,330,90,30);
//	circle(450,193,3);
//	line(430,200,450,200);
//	line(597,185,630,170);
//	line(597,215,630,227);
//	line(630,170,630,227);
//	line(597,200,630,200);
//	line(597,192,630,187);
//	line(597,207,630,213);
//	line(500,190,540,150);
//	line(530,190,540,150);
//	getch();
//	
//	
//}
//Drawing a smilling face
//#include<graphics.h>
//#include<stdio.h>
//#include<conio.h>
//#include<stdlib.h>
// 
//int main()
//{
//   int gd = DETECT, gm, area, temp1, temp2, left = 25, top = 75;
//   void *p;
// 
//   initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
// 
//   setcolor(YELLOW);
//   circle(50,100,25);
//   setfillstyle(SOLID_FILL,YELLOW);
//   floodfill(50,100,YELLOW);
// 
//   setcolor(BLACK);
//   setfillstyle(SOLID_FILL,BLACK);
//   fillellipse(44,85,2,6);
//   fillellipse(56,85,2,6);
// 
//   ellipse(50,100,205,335,20,9);
//   ellipse(50,100,205,335,20,10);
//   ellipse(50,100,205,335,20,11);
// 
//   area = imagesize(left, top, left + 50, top + 50);
//   p = malloc(area);
// 
//   setcolor(WHITE);
//   settextstyle(SANS_SERIF_FONT,HORIZ_DIR,2);
////   outtextxy(20,451,"Smiling Face Project by http://www.turboc.codeplex.com");
// 
//   setcolor(BLUE);
//   rectangle(0,0,639,449);
// 
//   while(!kbhit())
//   {
//      temp1 = 1 + random ( 588 );
//      temp2 = 1 + random ( 380 );
// 
//      getimage(left, top, left + 50, top + 50, p);
//      putimage(left, top, p, XOR_PUT);
//      putimage(temp1 , temp2, p, XOR_PUT);
//      delay(500);
//      left = temp1;
//      top = temp2;
//   }
// 
//   getch();
//   closegraph();
//   return 0;
//}

//traffic light
//#include<graphics.h>
//#include<conio.h>
//#include<dos.h>
//#include<stdlib.h>
//
//int main()
//{
//   int gd = DETECT, gm, midx, midy;
//   initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
//   midx = getmaxx()/2;
//   midy = getmaxy()/2;
//   setcolor(RED);
//   settextstyle(SCRIPT_FONT, HORIZ_DIR, 3);
//   settextjustify(CENTER_TEXT, CENTER_TEXT);
//   outtextxy(midx, midy-10, "Traffic Light Simulation");
//   outtextxy(midx, midy+10, "Press any key to start");
//   getch();
//   cleardevice();
//   setcolor(WHITE);
//   settextstyle(DEFAULT_FONT, HORIZ_DIR, 1);
//   rectangle(midx-30,midy-80,midx+30,midy+80);
//   circle(midx, midy-50, 22);
//   setfillstyle(SOLID_FILL,RED);
//   floodfill(midx, midy-50,WHITE);
//   setcolor(BLUE);
//   outtextxy(midx,midy-50,"STOP");
//   delay(2000);
//   graphdefaults();
//   cleardevice();
//   setcolor(WHITE);
//   rectangle(midx-30,midy-80,midx+30,midy+80);
//   circle(midx, midy, 20);
//   setfillstyle(SOLID_FILL,YELLOW);
//   floodfill(midx, midy,WHITE);
//   setcolor(BLUE);
//   outtextxy(midx-18,midy-3,"READY");
//   delay(2000);
//   cleardevice();
//   setcolor(WHITE);
//   rectangle(midx-30,midy-80,midx+30,midy+80);
//   circle(midx, midy+50, 22);
//   setfillstyle(SOLID_FILL,GREEN);
//   floodfill(midx, midy+50,WHITE);
//   setcolor(BLUE);
//   outtextxy(midx-7,midy+48,"GO");
//   setcolor(RED);
//   settextstyle(SCRIPT_FONT, HORIZ_DIR, 4);
//   outtextxy(midx-150, midy+100, "Press any key to exit...");
//   getch();
//   setcolor(RED);
//   settextstyle(SCRIPT_FONT, HORIZ_DIR, 3);
//   settextjustify(CENTER_TEXT, CENTER_TEXT);
//   outtextxy(midx, midy, "Project by http://www.turboc.codeplex.com");
//   delay(5000);
//   closegraph();
//   return 0;
//}


//program for creating man object
//#include<stdio.h>
//#include<conio.h>
//#include<graphics.h>
//int main()
//{
//	int gd=DETECT,gm;
//	initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
//	setcolor(7);
//	circle(150,150,35);
//	line(150,185,150,300);
//	line(150,200,120,230);
//	line(150,200,180,230);
//	line(150,300,120,330);
//	line(150,300,180,330);
//	outtextxy(100,350,"Hello,How are you?");
//	getch();
//}

//program for creating house shape
//
//#include<stdio.h>
//#include<conio.h>
//#include<graphics.h>
//int main(){
//	int gd=DETECT, gm;
//	initgraph(&gd,&gm,"C:\\TURBO3\\BGI");
//	setcolor(7);
//	rectangle(60,80,150,200);
//	rectangle(95,140,120,200);
//	line(60,80,100,15);
//	line(100,15,150,80);
//	circle(100,60,10);
//	getch();
//	closegraph();
//}

//program for creating simple car shape

//#include<stdio.h>
//#include<conio.h>
//#include<graphics.h>
//#include<dos.h>
//int main(){
//	int gd=DETECT,gm;
//	initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
//	line(150,100,242,100);
//	ellipse(242,105,0,90,10,5);
//	line(150,100,120,150);
//	line(252,105,280,150);
//	line(100,150,320,150);
//	line(100,150,100,200);
//	line(320,150,320,200);
//	line(100,200,110,200);
//	line(320,200,310,200);
//	arc(130,200,0,180,20);
//	arc(290,200,0,180,20);
//	line(270,200,150,200);
//	circle(130,200,17);
//	circle(290,200,17);
//	getch();
//}

//smile face
//#include <stdio.h>
//#include <conio.h>
//#include <graphics.h>
//
//int main() {
//    int gd = DETECT, gm;
//    initgraph(&gd, &gm, "");
//    circle(320, 240, 100);
//    circle(280, 200, 20);
//    circle(360, 200, 20);
//    arc(320, 250, 180, 0, 50);
//outtextxy(265,350,"Keep Smiling!!!");
//    getch();
//    closegraph();
//    return 0;
//}
//program to make different bubble shape of circle
//#include <graphics.h>
//#include <conio.h>
//#include <stdlib.h>
//#include <time.h>
//
//#define NUM_BUBBLES 10
//
//int main() {
//    int gd = DETECT, gm;
//    initgraph(&gd, &gm, "");
//
//    // Seed the random number generator
//    srand(time(NULL));
//
//    // Create an array to store bubble properties
//    int bubbleX[NUM_BUBBLES], bubbleY[NUM_BUBBLES], bubbleRadius[NUM_BUBBLES], bubbleColor[NUM_BUBBLES];
//
//    // Initialize bubble properties
//    for (int i = 0; i < NUM_BUBBLES; i++) {
//        bubbleX[i] = rand() % getmaxx();
//        bubbleY[i] = rand() % getmaxy();
//        bubbleRadius[i] = rand() % 50 + 10;
//        bubbleColor[i] = rand() % 16;
//    }
//
//    // Draw the bubbles
//    for (int i = 0; i < NUM_BUBBLES; i++) {
//        setcolor(bubbleColor[i]);
//        circle(bubbleX[i], bubbleY[i], bubbleRadius[i]);
//    }
//
//    // Animate the bubbles
//    while (!kbhit()) {
//        for (int i = 0; i < NUM_BUBBLES; i++) {
//            // Move the bubble randomly
//            bubbleX[i] += rand() % 3 - 1;
//            bubbleY[i] += rand() % 3 - 1;
//
//            // Check if the bubble is out of bounds
//            if (bubbleX[i] < 0 || bubbleX[i] > getmaxx() || bubbleY[i] < 0 || bubbleY[i] > getmaxy()) {
//                // Reposition the bubble randomly
//                bubbleX[i] = rand() % getmaxx();
//                bubbleY[i] = rand() % getmaxy();
//            }
//
//            // Clear the previous bubble
//            setcolor(BLACK);
//            circle(bubbleX[i], bubbleY[i], bubbleRadius[i]);
//
//            // Draw the new bubble
//            setcolor(bubbleColor[i]);
//            circle(bubbleX[i], bubbleY[i], bubbleRadius[i]);
//        }
//    }
//
//    getch();
//    closegraph();
//    return 0;
//}
//wap to make a tree
//#include <graphics.h>
//#include <conio.h>
//#include <math.h>
//#define TREE_HEIGHT 300
//#define TRUNK_WIDTH 20
//#define BRANCH_LENGTH 50
//#define BRANCH_ANGLE 30 
//void drawBranch(int x, int y, int length, int angle) {
//    int x1 = x + length * cos(angle * M_PI / 180);
//    int y1 = y - length * sin(angle * M_PI / 180);
//    line(x, y, x1, y1);
//    if (length > 10) {
//        drawBranch(x1, y1, length * 0.8, angle + rand() % 30 - 15);
//        drawBranch(x1, y1, length * 0.8, angle - rand() % 30 - 15);
//    }
//}
//int main() {
//    int gd = DETECT, gm;
//    initgraph(&gd, &gm, "");
//    setcolor(BROWN);
//    rectangle(320 - TRUNK_WIDTH / 2, TREE_HEIGHT, 320 + TRUNK_WIDTH / 2, TREE_HEIGHT + 100);
//    setcolor(GREEN);
//    drawBranch(320, TREE_HEIGHT, BRANCH_LENGTH, BRANCH_ANGLE);
//    drawBranch(320, TREE_HEIGHT, BRANCH_LENGTH, -BRANCH_ANGLE);
//    getch();
//    closegraph();
//    return 0;
//}
//wap for bouncing ball
//#include <graphics.h>
//#include <conio.h>
//#include <time.h>
//
//#define BALL_RADIUS 10
//#define BALL_SPEED 5
//
//int main() {
//    int gd = DETECT, gm;
//    initgraph(&gd, &gm, "");
//
//    // Seed the random number generator
//    srand(time(NULL));
//
//    // Initialize ball position and velocity
//    int ballX = rand() % getmaxx();
//    int ballY = rand() % getmaxy();
//    int ballVX = rand() % BALL_SPEED + 1;
//    int ballVY = rand() % BALL_SPEED + 1;
//
//    // Main loop
//    while (!kbhit()) {
//        // Clear the previous ball
//        setcolor(BLACK);
//        circle(ballX, ballY, BALL_RADIUS);
//
//        // Update ball position
//        ballX += ballVX;
//        ballY += ballVY;
//
//        // Check for collisions with walls
//        if (ballX <= BALL_RADIUS || ballX >= getmaxx() - BALL_RADIUS) {
//            ballVX = -ballVX;
//        }
//        if (ballY <= BALL_RADIUS || ballY >= getmaxy() - BALL_RADIUS) {
//            ballVY = -ballVY;
//        }
//
//        // Draw the new ball
//        setcolor(WHITE);
//        circle(ballX, ballY, BALL_RADIUS);
//
//        // Delay for animation
//        delay(10);
//    }
//
//    getch();
//    closegraph();
//    return 0;
//}


#include <stdio.h>
#include <graphics.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    int x = 300, y = 200, radius = 50;

    setcolor(RED);
    circle(x, y, radius);

    setcolor(BROWN);
    line(x, y - radius, x, y - radius - 15);
    setcolor(GREEN);
    circle(x, y - radius - 15, 5);

    setfillstyle(SOLID_FILL, WHITE);
    fillellipse(x + radius / 2, y - radius / 4, radius / 4, radius / 8);
    setfillstyle(SOLID_FILL, BLACK);
    fillellipse(x + radius / 2, y + radius / 4, radius / 4, radius / 8);

    getch();
    closegraph();

    return 0;
}


=======
//circle graphics
//#include<stdio.h>
//#include<conio.h>
//#include<graphics.h>
//#include<dos.h>
//int main()
//{
//	int gd=DETECT,gm;
//	int i;
//	initgraph(&gd,&gm,"c:\tc\\bgi");
//	for(i=0;i<500;i++)
//	{
//		setcolor(i);
//		//coordinates of center from x axis, y axis, radius
//		circle(300,250,20+i);
//		delay(80);
//	}
//	getch();
//	closegraph();
//}

//Draw a line
//#include<stdio.h>
//#include<conio.h>
//#include<graphics.h>
//#include<dos.h>
//int main()
//{
//	int gd=DETECT,gm;
//	int x1=200,y1=200;
//	int x2=300,y2=300;
//	initgraph(&gd,&gm,"c:\tc\\bgi");
//line(x1,y1,x2,y2);
//	getch();
//	closegraph();
//}
//draw a simple circle
//#include<stdio.h>
//#include<conio.h>
//#include<graphics.h>
//#include<dos.h>
//int main()
//{
//	int gd=DETECT,gm;
//	initgraph(&gd,&gm,"c:\tc\\bgi");
//		circle(150,150,100);
//		getch();
//	closegraph();
//}

//draw a simplerectangle
//#include<stdio.h>
//#include<conio.h>
//#include<graphics.h>
//#include<dos.h>
//int main()
//{
//	int gd=DETECT,gm;
//	initgraph(&gd,&gm,"c:\tc\\bgi");
//		rectangle(50,50,300,350);
//	getch();
//	closegraph();
//}

//Hut Graphics
//#include<conio.h>
//#include<graphics.h>
//int main()
//{
//	int gd = DETECT,gm;
//	initgraph(&gd,&gm,"c:\\tc\\bgi");
//	/*Draw Hut*/
//	setcolor(WHITE);
//	rectangle(150,180,250,300);
//	rectangle(250,180,420,300);
//	rectangle(180,250,220,300);
//
//	line(200,100,150,180);
//	line(200,100,250,180);
//	line(200,100,370,100);
//	line(370,100,420,180);
//	/*Fill Color*/
//	setfillstyle(SOLID_FILL,BROWN);
//	floodfill(152,182,WHITE);
//	floodfill(252,182,WHITE);
//	setfillstyle(SLASH_FILL,RED);
//	floodfill(182,252,WHITE);
//	setfillstyle(HATCH_FILL,GREEN);
//	floodfill(200,105,WHITE);
//	floodfill(210,105,WHITE);
//	getch();
//	closegraph();
//	return 0;
//	
//}

//Drawing Shapes(Line,Circle,Bar,Rectangle,Ellipse)

//#include<conio.h>
//#include<graphics.h>
//int main()
//{
//	int gd = DETECT,gm;
//	initgraph(&gd,&gm,"c:\\tc\\bgi");
//	rectangle(200,100,150,120); //Drawing rectangle
//	circle(300,300,20); //Drawing circle
//	bar(100,190,150,50); //Drawing Bar
//	line(150,140,50,100); //Drawing line
//	ellipse(500,550,203,60,100,50); //Ellipse
//	
//	//writing text at a position
//	outtextxy(10,25,"Graphics program");
//	getch();
//	closegraph();
//	return 0;
//}

//rectangle with color
//#include<stdio.h>
//#include<conio.h>
//#include<graphics.h>
//int main()
//{
//	int gd=DETECT,gm;
//	initgraph(&gd,&gm,"c:\tc\\bgi");
//	setcolor(0);
//		rectangle(150,150,300,350);
//	getch();
//	closegraph();
//}
//moving car example

//#include<stdio.h>
//#include<conio.h>
//#include<graphics.h>
//#include<dos.h>
//int main()
//{
//	int gd = DETECT,gm;
//	int i,j=0;
//	initgraph(&gd,&gm,"c:\\tc\\bgi");
//	setviewport(0,0,539,440,1);
//	for(i=0;i<=420;i=i+10,j++){
//		rectangle(50+i,275,150+i,400);
//		rectangle(150+i,350,200+i,400);
//		circle(75+i,410,10);
//		circle(175+i,410,10);
//		setcolor(j);
//		delay(600);
//		if(i==420)
//		break;
//		clearviewport();
//	}
//	getch();
//	closegraph();
//	return 0;
//}
//	

//program for creating fish

//#include<stdio.h>
//#include<conio.h>
//#include<dos.h>
//#include<graphics.h>
//#include<ctype.h>
//int main(){
//	int gd=DETECT,gm;
//	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
//	cleardevice();
//	ellipse(520,200,30,330,90,30);
//	circle(450,193,3);
//	line(430,200,450,200);
//	line(597,185,630,170);
//	line(597,215,630,227);
//	line(630,170,630,227);
//	line(597,200,630,200);
//	line(597,192,630,187);
//	line(597,207,630,213);
//	line(500,190,540,150);
//	line(530,190,540,150);
//	getch();
//	
//	
//}
//Drawing a smilling face
//#include<graphics.h>
//#include<stdio.h>
//#include<conio.h>
//#include<stdlib.h>
// 
//int main()
//{
//   int gd = DETECT, gm, area, temp1, temp2, left = 25, top = 75;
//   void *p;
// 
//   initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
// 
//   setcolor(YELLOW);
//   circle(50,100,25);
//   setfillstyle(SOLID_FILL,YELLOW);
//   floodfill(50,100,YELLOW);
// 
//   setcolor(BLACK);
//   setfillstyle(SOLID_FILL,BLACK);
//   fillellipse(44,85,2,6);
//   fillellipse(56,85,2,6);
// 
//   ellipse(50,100,205,335,20,9);
//   ellipse(50,100,205,335,20,10);
//   ellipse(50,100,205,335,20,11);
// 
//   area = imagesize(left, top, left + 50, top + 50);
//   p = malloc(area);
// 
//   setcolor(WHITE);
//   settextstyle(SANS_SERIF_FONT,HORIZ_DIR,2);
////   outtextxy(20,451,"Smiling Face Project by http://www.turboc.codeplex.com");
// 
//   setcolor(BLUE);
//   rectangle(0,0,639,449);
// 
//   while(!kbhit())
//   {
//      temp1 = 1 + random ( 588 );
//      temp2 = 1 + random ( 380 );
// 
//      getimage(left, top, left + 50, top + 50, p);
//      putimage(left, top, p, XOR_PUT);
//      putimage(temp1 , temp2, p, XOR_PUT);
//      delay(500);
//      left = temp1;
//      top = temp2;
//   }
// 
//   getch();
//   closegraph();
//   return 0;
//}

//traffic light
//#include<graphics.h>
//#include<conio.h>
//#include<dos.h>
//#include<stdlib.h>
//
//int main()
//{
//   int gd = DETECT, gm, midx, midy;
//   initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
//   midx = getmaxx()/2;
//   midy = getmaxy()/2;
//   setcolor(RED);
//   settextstyle(SCRIPT_FONT, HORIZ_DIR, 3);
//   settextjustify(CENTER_TEXT, CENTER_TEXT);
//   outtextxy(midx, midy-10, "Traffic Light Simulation");
//   outtextxy(midx, midy+10, "Press any key to start");
//   getch();
//   cleardevice();
//   setcolor(WHITE);
//   settextstyle(DEFAULT_FONT, HORIZ_DIR, 1);
//   rectangle(midx-30,midy-80,midx+30,midy+80);
//   circle(midx, midy-50, 22);
//   setfillstyle(SOLID_FILL,RED);
//   floodfill(midx, midy-50,WHITE);
//   setcolor(BLUE);
//   outtextxy(midx,midy-50,"STOP");
//   delay(2000);
//   graphdefaults();
//   cleardevice();
//   setcolor(WHITE);
//   rectangle(midx-30,midy-80,midx+30,midy+80);
//   circle(midx, midy, 20);
//   setfillstyle(SOLID_FILL,YELLOW);
//   floodfill(midx, midy,WHITE);
//   setcolor(BLUE);
//   outtextxy(midx-18,midy-3,"READY");
//   delay(2000);
//   cleardevice();
//   setcolor(WHITE);
//   rectangle(midx-30,midy-80,midx+30,midy+80);
//   circle(midx, midy+50, 22);
//   setfillstyle(SOLID_FILL,GREEN);
//   floodfill(midx, midy+50,WHITE);
//   setcolor(BLUE);
//   outtextxy(midx-7,midy+48,"GO");
//   setcolor(RED);
//   settextstyle(SCRIPT_FONT, HORIZ_DIR, 4);
//   outtextxy(midx-150, midy+100, "Press any key to exit...");
//   getch();
//   setcolor(RED);
//   settextstyle(SCRIPT_FONT, HORIZ_DIR, 3);
//   settextjustify(CENTER_TEXT, CENTER_TEXT);
//   outtextxy(midx, midy, "Project by http://www.turboc.codeplex.com");
//   delay(5000);
//   closegraph();
//   return 0;
//}


//program for creating man object
//#include<stdio.h>
//#include<conio.h>
//#include<graphics.h>
//int main()
//{
//	int gd=DETECT,gm;
//	initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
//	setcolor(7);
//	circle(150,150,35);
//	line(150,185,150,300);
//	line(150,200,120,230);
//	line(150,200,180,230);
//	line(150,300,120,330);
//	line(150,300,180,330);
//	outtextxy(100,350,"Hello,How are you?");
//	getch();
//}

//program for creating house shape
//
//#include<stdio.h>
//#include<conio.h>
//#include<graphics.h>
//int main(){
//	int gd=DETECT, gm;
//	initgraph(&gd,&gm,"C:\\TURBO3\\BGI");
//	setcolor(7);
//	rectangle(60,80,150,200);
//	rectangle(95,140,120,200);
//	line(60,80,100,15);
//	line(100,15,150,80);
//	circle(100,60,10);
//	getch();
//	closegraph();
//}

//program for creating simple car shape

//#include<stdio.h>
//#include<conio.h>
//#include<graphics.h>
//#include<dos.h>
//int main(){
//	int gd=DETECT,gm;
//	initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
//	line(150,100,242,100);
//	ellipse(242,105,0,90,10,5);
//	line(150,100,120,150);
//	line(252,105,280,150);
//	line(100,150,320,150);
//	line(100,150,100,200);
//	line(320,150,320,200);
//	line(100,200,110,200);
//	line(320,200,310,200);
//	arc(130,200,0,180,20);
//	arc(290,200,0,180,20);
//	line(270,200,150,200);
//	circle(130,200,17);
//	circle(290,200,17);
//	getch();
//}

//smile face
//#include <stdio.h>
//#include <conio.h>
//#include <graphics.h>
//
//int main() {
//    int gd = DETECT, gm;
//    initgraph(&gd, &gm, "");
//    circle(320, 240, 100);
//    circle(280, 200, 20);
//    circle(360, 200, 20);
//    arc(320, 250, 180, 0, 50);
//outtextxy(265,350,"Keep Smiling!!!");
//    getch();
//    closegraph();
//    return 0;
//}
//program to make different bubble shape of circle
//#include <graphics.h>
//#include <conio.h>
//#include <stdlib.h>
//#include <time.h>
//
//#define NUM_BUBBLES 10
//
//int main() {
//    int gd = DETECT, gm;
//    initgraph(&gd, &gm, "");
//
//    // Seed the random number generator
//    srand(time(NULL));
//
//    // Create an array to store bubble properties
//    int bubbleX[NUM_BUBBLES], bubbleY[NUM_BUBBLES], bubbleRadius[NUM_BUBBLES], bubbleColor[NUM_BUBBLES];
//
//    // Initialize bubble properties
//    for (int i = 0; i < NUM_BUBBLES; i++) {
//        bubbleX[i] = rand() % getmaxx();
//        bubbleY[i] = rand() % getmaxy();
//        bubbleRadius[i] = rand() % 50 + 10;
//        bubbleColor[i] = rand() % 16;
//    }
//
//    // Draw the bubbles
//    for (int i = 0; i < NUM_BUBBLES; i++) {
//        setcolor(bubbleColor[i]);
//        circle(bubbleX[i], bubbleY[i], bubbleRadius[i]);
//    }
//
//    // Animate the bubbles
//    while (!kbhit()) {
//        for (int i = 0; i < NUM_BUBBLES; i++) {
//            // Move the bubble randomly
//            bubbleX[i] += rand() % 3 - 1;
//            bubbleY[i] += rand() % 3 - 1;
//
//            // Check if the bubble is out of bounds
//            if (bubbleX[i] < 0 || bubbleX[i] > getmaxx() || bubbleY[i] < 0 || bubbleY[i] > getmaxy()) {
//                // Reposition the bubble randomly
//                bubbleX[i] = rand() % getmaxx();
//                bubbleY[i] = rand() % getmaxy();
//            }
//
//            // Clear the previous bubble
//            setcolor(BLACK);
//            circle(bubbleX[i], bubbleY[i], bubbleRadius[i]);
//
//            // Draw the new bubble
//            setcolor(bubbleColor[i]);
//            circle(bubbleX[i], bubbleY[i], bubbleRadius[i]);
//        }
//    }
//
//    getch();
//    closegraph();
//    return 0;
//}
//wap to make a tree
//#include <graphics.h>
//#include <conio.h>
//#include <math.h>
//#define TREE_HEIGHT 300
//#define TRUNK_WIDTH 20
//#define BRANCH_LENGTH 50
//#define BRANCH_ANGLE 30 
//void drawBranch(int x, int y, int length, int angle) {
//    int x1 = x + length * cos(angle * M_PI / 180);
//    int y1 = y - length * sin(angle * M_PI / 180);
//    line(x, y, x1, y1);
//    if (length > 10) {
//        drawBranch(x1, y1, length * 0.8, angle + rand() % 30 - 15);
//        drawBranch(x1, y1, length * 0.8, angle - rand() % 30 - 15);
//    }
//}
//int main() {
//    int gd = DETECT, gm;
//    initgraph(&gd, &gm, "");
//    setcolor(BROWN);
//    rectangle(320 - TRUNK_WIDTH / 2, TREE_HEIGHT, 320 + TRUNK_WIDTH / 2, TREE_HEIGHT + 100);
//    setcolor(GREEN);
//    drawBranch(320, TREE_HEIGHT, BRANCH_LENGTH, BRANCH_ANGLE);
//    drawBranch(320, TREE_HEIGHT, BRANCH_LENGTH, -BRANCH_ANGLE);
//    getch();
//    closegraph();
//    return 0;
//}
//wap for bouncing ball
//#include <graphics.h>
//#include <conio.h>
//#include <time.h>
//
//#define BALL_RADIUS 10
//#define BALL_SPEED 5
//
//int main() {
//    int gd = DETECT, gm;
//    initgraph(&gd, &gm, "");
//
//    // Seed the random number generator
//    srand(time(NULL));
//
//    // Initialize ball position and velocity
//    int ballX = rand() % getmaxx();
//    int ballY = rand() % getmaxy();
//    int ballVX = rand() % BALL_SPEED + 1;
//    int ballVY = rand() % BALL_SPEED + 1;
//
//    // Main loop
//    while (!kbhit()) {
//        // Clear the previous ball
//        setcolor(BLACK);
//        circle(ballX, ballY, BALL_RADIUS);
//
//        // Update ball position
//        ballX += ballVX;
//        ballY += ballVY;
//
//        // Check for collisions with walls
//        if (ballX <= BALL_RADIUS || ballX >= getmaxx() - BALL_RADIUS) {
//            ballVX = -ballVX;
//        }
//        if (ballY <= BALL_RADIUS || ballY >= getmaxy() - BALL_RADIUS) {
//            ballVY = -ballVY;
//        }
//
//        // Draw the new ball
//        setcolor(WHITE);
//        circle(ballX, ballY, BALL_RADIUS);
//
//        // Delay for animation
//        delay(10);
//    }
//
//    getch();
//    closegraph();
//    return 0;
//}


#include <stdio.h>
#include <graphics.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    int x = 300, y = 200, radius = 50;

    setcolor(RED);
    circle(x, y, radius);

    setcolor(BROWN);
    line(x, y - radius, x, y - radius - 15);
    setcolor(GREEN);
    circle(x, y - radius - 15, 5);

    setfillstyle(SOLID_FILL, WHITE);
    fillellipse(x + radius / 2, y - radius / 4, radius / 4, radius / 8);
    setfillstyle(SOLID_FILL, BLACK);
    fillellipse(x + radius / 2, y + radius / 4, radius / 4, radius / 8);

    getch();
    closegraph();

    return 0;
}


>>>>>>> 18eab0e4d506445091916fd87bb0bbb624841542
