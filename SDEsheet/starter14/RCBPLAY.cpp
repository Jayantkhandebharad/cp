#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, x, y, z;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> x >> y >> z;
        if (x + z * 2 >= y)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}