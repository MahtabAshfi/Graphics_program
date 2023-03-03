#include <bits/stdc++.h>
#include <graphics.h>
using namespace std;
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char *)"");

    int xc, yc, r, d;
    cout << "Enter center points: " << endl;
    cin >> xc >> yc;
    cout << "Enter radius value: " << endl;
    cin >> r;

    d = 3 - 2 * r;
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

        if (d <= 0)
        {
            x++;
            d = d + 4 * x + 6;
        }
        else
        {
            x++;
            y--;
            d = d + 4 * (x - y) + 10;
        }
    }
    getch();
    closegraph();
}
