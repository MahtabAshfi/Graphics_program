#include <bits/stdc++.h>
#include <graphics.h>
using namespace std;
int main()
{
    double x1,y1,x2,y2;
    double nx1,ny1,nx2,ny2;
    double tx,ty;

    cout<<"Enter first coordinate points: ";
    cin>>x1>>y1;

    cout<<"Enter second coordinate points: ";
    cin>>x2>>y2;

    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char *)"");

    line(x1,y1,x2,y2);
    cin>>tx>>ty;

    nx1 = x1 + tx;
    ny1 = y1 + ty;
    nx2 = x2 + tx;
    ny2 = y2 + ty;

    line(nx1,ny1,nx2,ny2);

    getch();
    closegraph();
}