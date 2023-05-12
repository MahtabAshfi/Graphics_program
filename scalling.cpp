#include <bits/stdc++.h>
#include <graphics.h>
using namespace std;
int main()
{
    double x1,y1,x2,y2;
    double nx1,ny1,nx2,ny2;
    double Sx,Sy;

    cout<<"Enter first coordinate points: ";
    cin>>x1>>y1;

    cout<<"Enter second coordinate points: ";
    cin>>x2>>y2;

    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char *)"");

    line(x1,y1,x2,y2);

    cout<<"Enter the scalling factor: ";
    cin>>Sx>>Sy;

    nx1 = x1 * Sx;
    ny1 = y1 * Sy;
    nx2 = x2 * Sx;
    ny2 = y2 + Sy;

    line(nx1,ny1,nx2,ny2);

    getch();
    closegraph();
}