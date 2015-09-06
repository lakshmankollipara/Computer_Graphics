
  /*DEEBAN D
  BL.EN.U4CSE09040 */
  #include<graphics.h>
  #include<stdlib.h>
  #include<stdio.h>
  #include<conio.h>
  int main()
  {int gdriver=DETECT,gmode,errorcode;
  int xmax,ymax,m,i,x1=200,x2=300,y1=150,y2=180,dx,dy,
  x3=x1,y3=y1;
  float xinc,yinc;
  initgraph(&gdriver,&gmode," ");
  errorcode=graphresult();
  if(errorcode!=grOk)
  {printf("graphics error:%s\n",grapherrormsg(errorcode));
  printf("press any key to halt:");
  getch();
  exit(1);
  }
  line(x1,y1,x2,y2);
  dx=x2-x1;
  dy=y2-y1;
  m=dy/dx;
  if(m<=1)
  {xinc=1;yinc=m*xinc;
  if(dx>dy)
  {for(i=0;i<dx;i++)
  {x1=x1+1;y1=m+y1;
  x3=int(x1+0.5)+1;
  y3=int(m+y1+0.5);
  putpixel(x3,y3,3);
  }
  }
  }
  else
  {yinc=1;
  xinc=yinc/m;
  if(dx>dy)
  {for(i=0;i<dx;i++)
  {y1=y1+1;
  x1=x1+(1/m);
  x3=int(x3+0.5)+int(1/m);
  y3=int(y3+0.5)+1;
  putpixel(x3,y3,3);
  }
  }
  }
  getch();
 closegraph();
 return 0;
  }