#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t, n, p, x, y, m, l;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n >> p >> x >> y;
        l = 0;
        for (int j = 0; j < n; j++)
        {
            cin >> m;

            if (p > j)
            {
                if (m == 1)
                {
                    l = l + y;
                }
                else
                {
                    l = l + x;
                }
            }
        }
        cout << l << endl;
    }
}