

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;
    int mx = max(abs(x), abs(y));
    int count = 4 * (mx - 1);
    if ((x == 0 and y == 0) or (x == 1 and y == 0))
    {
        cout << 0 << endl;
        return 0;
    }
    if (x >= 0 and y >= 0)
    {
        if (x >= y)
        {
            count += 1;
        }
        else
        {
            count += 2;
        }
    }
    else if (x <= 0 and y >= 0)
    {
        if (abs(y) >= abs(x))
        {
            count += 2;
        }
        else
        {
            count += 3;
        }
    }
    else if (x <= 0 and y <= 0)
    {
        if (abs(x) >= abs(y))
        {
            count += 3;
        }
        else
        {
            count += 4;
        }
    }
    else
    {
        if (abs(y) > x - 1)
        {
            count += 4;
        }
        }
    cout << count << endl;
    return 0;
}