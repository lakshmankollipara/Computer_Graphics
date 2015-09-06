#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm," ");
char a;
printf("\n Enter the coordinates for a triangle ");
scanf("%d%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);
line(x1,y1,x2,y2);
line(x2,y2,x3,y3);
line(x3,y3,x1,y1);
printf("enter the axis of reflection\n");
scanf("%c",&a);
if(a='x'||a='X')
{
x1=x1;
x2=x2;
x3=x3;
y1=y1+100;
y2=y2+100;
y3=y3+(100+80);
line(x1,y1,x2,y2);
line(x2,y2,x3,y3);
line(x3,y3,x1,y1);
}
if(a='y'||a='Y')
{
x1=x1+100;
x2=x2+100;
x3=x3+(100+60);
y1=y1;
y2=y2;
y3=y3;
line(x1,y1,x2,y2);
line(x2,y2,x3,y3);
line(x3,y3,x1,y1);
} 
return 0;
}