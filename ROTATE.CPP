#include<iostream.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>
int main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm," ");
int z,x[4],y[4],xd[4],yd[4],tdisx,tdisy,px,py;
float ang;
cout<<"\n Enter the coordinates for a quadrilateral: ";
for(int j=0;j<4;j++)
{
cin>>x[j]>>y[j];
}
cout<<"\n Enter the angle: ";
cin>>ang;
ang=((ang*3.14)/180);
for(int k=0;k<3;k++)
line(x[k]+100,-y[k]+400,x[k+1]+100,-y[k+1]+400);
line(x[3]+100,-y[3]+400,x[0]+100,-y[0]+400);
getch();
//clrscr();
cout<<"\n Rotation: ";
for(int i=0;i<4;i++)
{
xd[i]=x[i]*cos(ang)-y[i]*sin(ang);
yd[i]=x[i]*sin(ang)+y[i]*cos(ang);
}
for(int l=0;l<3;l++)
line(xd[l]+100,-yd[l]+400,xd[l+1]+100,-yd[l+1]+400);
line(xd[3]+100,-yd[3]+400,xd[0]+100,-yd[0]+400);
getch();
//clrscr();
cout<<"\n Translate: ";
cout<<"\n Enter the translation distance: ";
cin>>tdisx>>tdisy;
for(int m=0;m<4;m++)
{
xd[m]+=tdisx;
yd[m]+=tdisy;
}
for(z=0;z<3;z++)
line(xd[z]+100,-yd[z]+400,xd[z+1]+100,-yd[z+1]+400);
line(xd[3]+100,-yd[3]+400,xd[0]+100,-yd[0]+400);
getch();
cout<<"\n Rotation about pivot point: ";
cout<<"\n Enter the coordinates: ";
cin>>px>>py;
for(int a=0;a<4;a++)
{
xd[a]=px+((x[a]-px)*cos(ang))-((y[a]-py)*sin(ang));
yd[a]=py+((x[a]-px)*sin(ang))+((y[a]-py)*cos(ang));
}
for(z=0;z<3;z++)
line(xd[z]+100,-yd[z]+400,xd[z+1]+100,-yd[z+1]+400);
line(xd[3]+100,-yd[3]+400,xd[0]+100,-yd[0]+400);
getch();
return 0;
}