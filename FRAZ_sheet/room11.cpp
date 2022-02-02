#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, x, y;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> x >> y;
        int l = 0;
        l = x - y;
        l += y * 2;
        if (x == y)
        {
            cout << l - 1 << endl;
        }
        else
        {
            cout << l << endl;
        }
    }
    return 0;
}