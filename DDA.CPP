#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<timer.h>
void mydot(int x, int y)
{
putpixel(x+100,-y+400,WHITE);
}
int round(float a)
{
if((float(a)-int(a))>=0.5)
return (int(a)+1);
else
return int(a);
}
void dda(int x1,int y1, int x2, int y2)
{
float m,prevx,prevy,nextx,nexty,delx,dely;
m=float(y2-y1)/(x2-x1);
if(m<0)
m=-m;
cout<<endl<<"Slope of the line is "<<m;
prevx=x1;
prevy=y1;
if(m>1)
{
mydot(x1,y1);
do
{
dely=1;
delx=float(1/m);
nextx=prevx+delx;
nexty=prevy+dely;
cout<<"("<<round(nextx)<<","<<round(nexty)<<") ";
mydot(round(nextx),round(nexty));
prevx=nextx;
prevy=nexty;
}while(nextx!=x2 && nexty!=y2);
}
else
{
mydot(x1,y1);
do
{
delx=1;
dely=m;
nextx=prevx+delx;
nexty=prevy+dely;
cout<<round(nextx)<<","<<round(nexty)<<"    ";
mydot(round(nextx),round(nexty));
prevx=nextx;
prevy=nexty;
}while(nextx!=x2 && nexty!=y2);
}
}
void normal(int x1,int y1, int x2, int y2)
{
if(x1-x2==0)
{
if(y1<y2)
{
while(y1!=y2)
putpixel(x1,y1++,WHITE);
}
else
{
while(y1!=y2)
putpixel(x2,y2++,WHITE);
}
}
else if(y1-y2==0)
{
if(x1<x2)
{
while(x1!=x2)
putpixel(x1++,y1,WHITE);
}
else
{
while(x1!=x2)
putpixel(x2++,y2,WHITE);
}
}
}
void main()
{
clrscr();
int x1,y1,x2,y2;
cout<<"Enter first co-ordinate (x1,y1) :"<<endl;
cin>>x1>>y1;
cout<<"Enter second co-ordinate (x2,y2) :"<<endl;
cin>>x2>>y2;
clrscr();
int gd=DETECT,gm;
initgraph(&gd,&gm,"mygraph");
setcolor(BLUE);
line(20,400,400,400);
line(100,480,100,100);
setcolor(RED);
dda(x1,y1,x2,y2);
getch();
}