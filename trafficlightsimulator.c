#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
#include<dos.h>

int main(){
int gd=0, gm;

initgraph(&gd, &gm, "C://TURBOC3/BGI");

setcolor(MAGENTA);
settextstyle(DEFAULT_FONT, HORIZ_DIR, 1);
outtextxy(200,50, "Traffic Light Simulation");
outtextxy(200,80, "Press any key to start");
getch();
cleardevice();

setviewport(0,0,639,500,1);
setcolor(WHITE);
rectangle(230,50,400,440);
rectangle(200,70,230,180);
rectangle(200,190,230,300);
rectangle(200,310,230,420);
rectangle(400,70,430,180);
rectangle(400,190,430,300);
rectangle(400,310,430,420);
rectangle(280,440,350,500);
settextstyle(DEFAULT_FONT, HORIZ_DIR, 3);
setcolor(WHITE);
setfillstyle(SOLID_FILL,RED);
circle(315,125,55);
floodfill(315,125,WHITE);
outtextxy(270,115, "STOP");
delay(1800);
clearviewport();

setviewport(0,0,639,500,1);
rectangle(230,50,400,440);
rectangle(200,70,230,180);
rectangle(200,190,230,300);
rectangle(200,310,230,420);
rectangle(400,70,430,180);
rectangle(400,190,430,300);
rectangle(400,310,430,420);
rectangle(280,440,350,500);
settextstyle(DEFAULT_FONT, HORIZ_DIR, 2);
setcolor(WHITE);
setfillstyle(SOLID_FILL,YELLOW);
circle(315,245,55);
floodfill(315,245,WHITE);
outtextxy(275,240, "READY");
delay(1800);
clearviewport();

setviewport(0,0,639,500,1);
rectangle(230,50,400,440);
rectangle(200,70,230,180);
rectangle(200,190,230,300);
rectangle(200,310,230,420);
rectangle(400,70,430,180);
rectangle(400,190,430,300);
rectangle(400,310,430,420);
rectangle(280,440,350,500);
settextstyle(DEFAULT_FONT, HORIZ_DIR, 3);
setcolor(WHITE);
setfillstyle(SOLID_FILL,GREEN);
circle(315,365,55);
floodfill(315,365,WHITE);
outtextxy(290,355, "GO");
delay(1800);
clearviewport();

setcolor(MAGENTA);
settextstyle(DEFAULT_FONT, HORIZ_DIR, 2);
outtextxy(230,200, "Thank You");
getch();
return 0;
}