#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int x1,y1,x[20],y[20],n;
float theta;

void draw_poly()
{
  int i;
  for(i=0;i<n-1;i++)
  {
    line(x[i],y[i],x[i+1],y[i+1]);
  }
    line(x[0],y[0],x[n-1],y[n-1]);
}

void translate(int x1,int y1)
{
  int a;
  for(a=0;a<n;a++)
  {
    x[a]=x[a]+x1;
    y[a]=y[a]+y1;

  }
}

void scale(int x1,int y1)
{
  int a,b;
  a=x[0];
  b=y[0];
  translate(-a,-b);
  int i;
  for(i=0;i<n;i++)
  {
    x[i]=x[i]*x1;
    y[i]=y[i]*y1;

  }
  translate(a,b);

}

void rotate(float theta)
{
  int a,b,i,c,d;
  a=x[0];
  b=y[0];
  translate(-a,-b);
  for(i=0;i<n;i++)
  {
    c=x[i]*cos(theta)-y[i]*sin(theta);
    d=x[i]*sin(theta)+y[i]*cos(theta);
    x[i]=c;
    y[i]=d;
  }
  translate(a,b);
}


int main()
{
  /* request auto detection */
int gdriver = DETECT, gmode, errorcode;

/* initialize graphics and local variables */
initgraph(&gdriver, &gmode, "");

/* read result of initialization */
errorcode = graphresult();
if (errorcode != grOk)  /* an error occurred */
{
   printf("Graphics error: %s\n", grapherrormsg(errorcode));
   printf("Press any key to halt:");
   getch();
   exit(1); /* terminate with an error code */
}
int i;
clrscr();
cout<<"\nEnter no. of Sides:: ";
cin>>n;
cout<<"\nEnter the Co-ordinate of Vertices::";
for(i=0;i<n;i++)
{
    cout<<"\n"<<i+1<<"::";
    cin>>x[i]>>y[i];

}
   draw_poly();
   getch();
   cleardevice();

   clrscr();
   int k;
   do
   {
    clrscr();
    cleardevice();
    cout<<"\n1)Translate\n2)Rotate\n3)Scale\n4)Exit.";
    cout<<"\nEnter Ur Choice::";

    cin>>k;
    switch(k)
    {
        case 1:
            cout<<"\nFor x-axis::";
            cin>>x1;
            cout<<"\nFor y-axis::";
            cin>>y1;
            translate(x1,y1);
            draw_poly();
            getch();
            cleardevice();
            break;

        case 2:
            cout<<"\nEnter the Angle::";
            cin>>theta;
            rotate(theta);
            draw_poly();
            getch();
            cleardevice();
            break;

        case 3:
            cout<<"\nFor x-axis::";
            cin>>x1;
            cout<<"\nFor y-axis::";
            cin>>y1;
            scale(x1,y1);
            draw_poly();
            getch();
            cleardevice();
            break;

    }
    } while(k!=4);
   return 0;
}
