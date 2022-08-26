#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void main()
{
int gd,gm,rad,i=1;
gd=DETECT;
initgraph(&gd,&gm,"C://TURBOC3/BGI");

for(rad=100;rad>=10;rad++)
{
setcolor(i);
circle(340,220,rad);
setfillstyle(SOLID_FILL,i);
floodfill(340,220,i);
rad=rad-10;
i++;
}

getch();
closegraph();
}

