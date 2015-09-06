/*DEEBAN D
BL.EN.U4CSE09040 */
#include<graphics.h>
#include<stdio.h>
#include<conio.h>
void boundfill(int,int,int,int);
main()
{
 int gd=DETECT,gm,x,y,f=1,b=BLUE;
 clrscr();
 initgraph(&gd,&gm,"");
 setbkcolor(WHITE);
 setcolor(BLUE);
 circle(60,60,10);
 printf("\nEnter the co-ordinates of the start point\n");
 scanf("%d%d",&x,&y);
 boundfill(x,y,f,b);
 getch();
 closegraph();
 return 0;
}
void boundfill(int x,int y,int f,int b)
{
 int c;
 c=getpixel(x,y);
 if((c!=f)&&(c!=b))
 {delay(10);
  putpixel(x,y,f);
  boundfill(x+1,y,f,b);
  boundfill(x-1,y,f,b);
  boundfill(x,y+1,f,b);
  boundfill(x,y-1,f,b);
 }
}
