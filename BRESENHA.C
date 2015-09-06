/*DEEBAN D
BL.EN.U4CSE09040 */
#include<stdio.h>
#include<graphics.h>
#include<conio.h>
void main()
{
int x0,y0,x1,y1,dx,dy,p0,p[100],k;
int gd=DETECT,gm;
initgraph(&gd,&gm,"");
printf("enter the x coordinate of the 1st point");
scanf("%d",&x0);
printf("enter the y coordinate of the 1st point");
scanf("%d",&y0);
printf("enter the x coordinate of the 2nd point");
scanf("%d",&x1);
printf("enter the y coordinate of the 2nd point");
scanf("%d",&y1);
dx=x1-x0;
dy=y1-y0;

p[0]=2*dy-dx;
if(p0<0)
{
x0=x0+1;
y0=y0;
}
else if(p0>0)
{
 x0=x0+1;
 y0=y0+1;
}
printf("%d\t%d\n",x0,y0);
putpixel(x0,y0,3);
for(k=1;k<dx;k++)
{
 if(p[k-1]<0)
{ p[k]=p[k-1]+2*dy;
}
else
p[k]=p[k-1]+2*dy-2*dx;
if(p[k]<0)
{
x0=x0+1;
y0=y0;
}
else
{
x0=x0+1;
y0=y0+1;
}
printf("%d\t%d\n",x0,y0);
putpixel(x0,y0,3);
}
getch();
}
