#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd,&gm,"");

    int x1,y1,x2,y2;
    cout<<"Enter the starting points: "<<endl;
    cin>>x1>>y1;

    cout<<"Enter the ending points: "<<endl;
    cin>>x2>>y2;

    int dx = x2 - x1;
    int dy = y2 - y1;

    int m = dy/dx;

    int x = x1;
    int y = y1;

    if(abs(m)<1){
        while(x<=x2){
            putpixel(x,y,GREEN);
            x++;
            y = y + m;
        }
    }
    else{
        while(y<=y2){
            putpixel(x,y,BLUE);
            y++;
            x = x + (1/m);
        }
    }
    getch();
    closegraph();
}
