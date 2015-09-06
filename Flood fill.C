/*DEEBAN D
BL.EN.U4CSE09040 */
#include<graphics.h>
#include<stdio.h>
#include<conio.h>

void floodfil(int,int,int,int);

int main()
{
 int gd=DETECT,gm,x,y,f=5,o=BLACK;
 initgraph(&gd,&gm,"");
 setbkcolor(BLACK);
 setcolor(RED);
 rectangle(100,100,250,250);
 printf("Enter the point from where filling has to start\n");
 scanf("%d%d",&x,&y);
 floodfil(x,y,f,o);
 getch();
 closegraph();
 return 0;
}

void floodfil(int x,int y,int fill,int old)
{
 if(getpixel(x,y)==old)
 {
  putpixel(x,y,fill);
  floodfil(x+1,y,fill,old);  delay(10);
  floodfil(x-1,y,fill,old);  delay(10);
  floodfil(x,y+1,fill,old);  delay(10);
  floodfil(x,y-1,fill,old);  delay(10);
 }
}


