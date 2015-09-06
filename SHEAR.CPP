#include<iostream.h>
#include<conio.h>
#include<graphics.h>
int main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm," ");
int i,l,x[4],y[4],xd[4],yd[4],sx,sy;
cout<<"\n Enter the coordinates for a quadrilateral: ";
for(int j=0;j<4;j++)
{
cin>>x[j]>>y[j];
}
for(int k=0;k<3;k++)
line(x[k]+100,-y[k]+400,x[k+1]+100,-y[k+1]+400);
line(x[3]+100,-y[3]+400,x[0]+100,-y[0]+400);
getch();
cout<<"\n Shear: ";
cout<<"\n Enter the shearing factors: ";
cin>>sx>>sy;
getch();
cout<<"\n Shear about x axis: ";
for(i=0;i<4;i++)
{
xd[i]=x[i]+sx*y[i];
yd[i]=y[i];
}
for(l=0;l<3;l++)
line(xd[l]+100,-yd[l]+400,xd[l+1]+100,-yd[l+1]+400);
line(xd[3]+100,-yd[3]+400,xd[0]+100,-yd[0]+400);
getch();
cout<<"\n Shear about y axis: ";
for(i=0;i<4;i++)
{
yd[i]=y[i]+sy*x[i];
xd[i]=x[i];
}
for(l=0;l<3;l++)
line(xd[l]+100,-yd[l]+400,xd[l+1]+100,-yd[l+1]+400);
line(xd[3]+100,-yd[3]+400,xd[0]+100,-yd[0]+400);
getch();
return 0;
}