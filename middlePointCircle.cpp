#include <bits/stdc++.h>
#include <graphics.h>
using namespace std;
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char *)"");

    int xc, yc, r, p;
    cout << "Enter center points: " << endl;
    cin >> xc >> yc;
    cout << "Enter radius value: " << endl;
    cin >> r;

    p = 1 - r;
    int x = 0;
    int y = r;

    while (x <= y)
    {
        putpixel(x + xc, y + yc, BLUE);
        putpixel(x + xc, -y + yc, BLUE);
        putpixel(-x + xc, y + yc, BLUE);
        putpixel(-x + xc, -y + yc, BLUE);
        putpixel(y + xc, x + yc, BLUE);
        putpixel(y + xc, -x + yc, BLUE);
        putpixel(-y + xc, x + yc, BLUE);
        putpixel(-y + xc, -x + yc, BLUE);

        if (p < 0)
        {
            x++;
            p = p + 2 * x + 3;
        }
        else
        {
            x++;
            y--;
            p = p + 2 * (x - y) + 5;
        }
    }
    getch();
    closegraph();
}