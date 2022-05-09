#include <bits/stdc++.h>

using namespace std;

int angle(int x1, int y1, int x2, int y2, int x3, int y3)
{
    int x, y, z;
    if (((x1 == x2) && (y1 == y2)) || ((x1 == x3) && (y1 == y3)) || ((x2 == x3) && (y2 == y3)))
        return 0;
    x = (x2 - x1) * (x3 - x1) + (y2 - y1) * (y3 - y1);
    y = (x1 - x2) * (x3 - x2) + (y1 - y2) * (y3 - y2);
    z = (x1 - x3) * (x2 - x3) + (y1 - y3) * (y2 - y3);
    //printf("%d,%d,%d\n",x,y,z);
    if (x == 0 || y == 0 || z == 0)
        return 1;
    return 0;
}

int main()
{
    int x1, x2, x3, y1, y2, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    if (angle(x1, y1, x2, y2, x3, y3))
    {
        printf("RIGHT\n");
    }
    else if (angle(x1 - 1, y1, x2, y2, x3, y3) == 1 || angle(x1 + 1, y1, x2, y2, x3, y3) == 1 || angle(x1, y1 + 1, x2, y2, x3, y3) == 1 || angle(x1, y1 - 1, x2, y2, x3, y3) == 1 || angle(x1, y1, x2 + 1, y2, x3, y3) == 1 || angle(x1, y1, x2 - 1, y2, x3, y3) == 1 || angle(x1, y1, x2, y2 + 1, x3, y3) == 1 || angle(x1, y1, x2, y2 - 1, x3, y3) == 1 || angle(x1, y1, x2, y2, x3 + 1, y3) == 1 || angle(x1, y1, x2, y2, x3 - 1, y3) == 1 || angle(x1, y1, x2, y2, x3, y3 + 1) == 1 || angle(x1, y1, x2, y2, x3, y3 - 1) == 1)
    {
        printf("ALMOST\n");
    }
    else
    {
        printf("NEITHER\n");
    }
}