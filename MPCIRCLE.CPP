#include<stdio.h>
#include<graphics.h>
#include<conio.h>
int x,y,xc,yc,r;
int plotpoints()
{
putpixel(xc+x,yc+y,2);
putpixel(xc-x,yc+y,2);
putpixel(xc+x,yc-y,2);
putpixel(xc-x,yc-y,2);
putpixel(xc+y,yc+x,2);
putpixel(xc-y,yc+x,2);
putpixel(xc+y,yc-x,2);
putpixel(xc-y,yc-x,2);
return 0;
}
int main()
{
int driver=DETECT,mode;
initgraph(&driver,&mode,"");
int p;
printf("enter the radius");
printf("\n");
scanf("%d",&r);
printf("enter the co-ordinates");
printf("\n");
scanf("%d%d",&xc,&yc);
p=1-r;
x=0;
y=r;
plotpoints();
while(x<y)
{
if(p<0)
x=x+1;
else
{
x=x+1;
y=y-1;
}
if(p<0)
p=p+(2*x+1);
else
p=p+(2*(x-y)+1);
plotpoints();
}
getch();
return 0;
}