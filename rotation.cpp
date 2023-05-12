#include <bits/stdc++.h>
#include <graphics.h>
using namespace std;
int main()
{
    double x1,y1,x2,y2,x3,y3;
    double nx1,ny1,nx2,ny2,nx3,ny3;

    cout<<"Enter first coordinate points: ";
    cin>>x1>>y1;

    cout<<"Enter second coordinate points: ";
    cin>>x2>>y2;

    cout<<"Enter second coordinate points: ";
    cin>>x3>>y3;

    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char *)"");

    line(x1,y1,x2,y2);
    line(x2,y2,x3,y3);
    line(x3,y3,x1,y1);
    
    double angle;
    cin>>angle;

    double radianangle = (angle*3.1416)/180;

    nx1 = floor(x1*cos(radianangle) - y1*sin(radianangle));
    ny1 = floor(x1*sin(radianangle) - y1*cos(radianangle));
    nx2 = floor(x2*cos(radianangle) - y2*sin(radianangle));
    ny2 = floor(x2*sin(radianangle) - y2*cos(radianangle));
    nx3 = floor(x3*cos(radianangle) - y3*sin(radianangle));
    ny3 = floor(x3*sin(radianangle) - y3*cos(radianangle));

    setcolor(RED);
    line(nx1,ny1,nx2,ny2);
    line(nx2,ny2,nx3,ny3);
    line(nx3,ny3,nx1,ny1);

    getch();
    closegraph();
}