#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
int a,b,c,d;
void translate();
void scale();
void rotate();

void main()
{
int ch;
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\turboc3\\bgi");

setcolor(6);
outtextxy (100,88,"Object.");
printf("\nenter 2 points ");
scanf("%d%d%d%d",&a,&b,&c,&d);
line(a,b,c,d);
do
{
printf("---MENU---");
printf("\n 1)Translate\n 2)Scale\n 3)Rotate\n 0)exit");
printf("\nEnter your choice: ");
scanf("%d",&ch);
cleardevice();

switch(ch)
{
case 1: translate();
break;
case 2: scale();
break;
case 3: rotate();
break;
case 0: printf("you have enterd wrong choice");
break;
}
}while(ch!=0);
getch();
closegraph();
}

void translate()
{
int tx,ty;
clrscr();
setcolor(2);
outtextxy(240,10,"TRANSLATION");
outtextxy(238,20,"------------");
printf("\nEnter tx: ");
scanf("%d",&tx);
printf("\nEnter ty: ");
scanf("%d",&ty);
cleardevice();
line(a,b,c,d);
printf("\nAfter Translation");
line(a+tx,b+ty,c+tx,d+ty);
}

void scale()
{
int sx,sy;
setcolor(2);
clrscr();
outtextxy(240,10,"SCALING");
outtextxy(238,20,"--------");
printf("\nEnter sx: ");
scanf("%d",&sx);
printf("\nEnter sy: ");
scanf("%d",&sy);
cleardevice();
line(a,b,c,d);
printf("\nAfter Scaling");
line(a*sx,b*sy,c*sx,d*sy);
}

void rotate()
{
float theta;
clrscr();
int x1,x2,x3,x4;
int y1,y2,y3,y4;
int ax1,ax2,ax3,ax4,ay1,ay2,ay3,ay4;
int refx,refy;
printf("\nEnter the angle for rotation: ");
scanf("%f",&theta);
theta=theta*(3.14/180);
cleardevice();
setcolor(2);
outtextxy(240,10,"ROTATE");
outtextxy(238,20,"-------");
refx=100;
refy=100;
x1=a;
y1=b;
x2=c;
y2=d;
ax1=refy+(x1-refx)*cos(theta)-(y1-refy)*sin(theta);
ay1=refy+(x1-refx)*sin(theta)+(y1-refy)*cos(theta);
ax2=refy+(x2-refx)*cos(theta)-(y2-refy)*sin(theta);
ay2=refy+(x2-refx)*sin(theta)+(y2-refy)*cos(theta);
line(a,b,c,d);
line(ax1,ay1,ax2,ay2);
}
