#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, x, y;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> x >> y;
        if (abs(x) % 2 == 0 and abs(y) % 2 == 0)
        {
            cout << "YES" << endl;
        }
        else if (abs(x) % 2 == 1 and abs(y) % 2 == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
