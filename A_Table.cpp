#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m, n, a;
    cin >> n >> m;
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a;
            if (a == 1 and (i == 0 || j == 0 || i == n - 1 || j == m - 1))
            {
                flag = true;
            }
        }
    }
    if (flag)
    {
        cout << 2;
    }
    else
    {
        cout << 4;
    }
    return 0;
}