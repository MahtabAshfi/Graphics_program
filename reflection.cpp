#include <bits/stdc++.h>
#include <graphics.h>
using namespace std;
int main()
{
    double x1,y1,x2,y2;
    double nx1,ny1,nx2,ny2;

    cout<<"Enter first coordinate points: ";
    cin>>x1>>y1;

    cout<<"Enter second coordinate points: ";
    cin>>x2>>y2;

    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char *)"");

    line(x1,y1,x2,y2);

    int axis = getmaxx() / 2;

    nx1 = 2 * axis - x1;
    ny1 = y1;
    nx2 = 2 * axis - x2;
    ny2 = y2;

    line(nx1,ny1,nx2,ny2);

    getch();
    closegraph();
}