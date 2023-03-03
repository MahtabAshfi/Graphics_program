#include <bits/stdc++.h>
#include <graphics.h>
using namespace std;
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char *)"");

    int x1, y1, x2, y2, dx, dy, p;
    cout << "Enter the starting points: " << endl;
    cin >> x1 >> y1;
    cout << "Enter the ending points: " << endl;
    cin >> x2 >> y2;

    dx = x2 - x1;
    dy = y2 - y1;
    p = 2 * dy - dx;

    int x = x1;
    int y = y1;
    int i = 0;

    while (i <= dx)
    {
        putpixel(x, y, BLUE);
        if (p < 0)
        {
            x++;
            p = p + 2 * dy;
        }
        else
        {
            x++;
            y++;
            p = p + 2 * (dy - dx);
        }
        i++;
    }
    getch();
    closegraph();
}