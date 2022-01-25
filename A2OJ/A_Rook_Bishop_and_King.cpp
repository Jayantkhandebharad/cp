#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, y, x1, y1, x2, y2;
    cin >> x >> y >> x1 >> y1;

    if ((x == x1) || (y == y1))
    {
        cout << 1 << " ";
    }
    else
    {
        cout << 2 << " ";
    }

    if (x + y == x1 + y1 || (abs(x - x1) == abs(y - y1)))
    {
        cout << 1 << " ";
    }
    else if ((x == y and x1 == y1))
    {
        cout << 1 << " ";
    }
    else if ((x + y) % 2 == (x1 + y1) % 2)
    {
        cout << 2 << " ";
    }
    else
    {
        cout << 0 << " ";
    }

    cout << max(abs(x - x1), abs(y - y1)) << endl;
    return 0;
}