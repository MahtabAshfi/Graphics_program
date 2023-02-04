#include<graphics.h>
int main()
{
   int gd = DETECT, gm;
   initgraph(&gd,&gm,"");

   line(100,85,80,140);
   line(100,85,120,140);
   line(20,140,80,140);
   line(120,140,180,140);
   line(60,175,20,140);
   line(60,175,45,230);
   line(45,230,100,190);
   line(155,230,100,190);
   line(155,230,140,175);
   line(140,175,180,140);
   getch();
   closegraph();
}
