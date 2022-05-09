#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d, n, m;
    cin >> n >> m;
    cin >> a;
    n--;
    b = a;
    c = a;
    bool flag = true;
    while (n--)
    {
        cin >> a;
        if (b < a)
            b = a;
        if (c > a)
            c = a;
    }
    while (m--)
    {
        cin >> d;
        if (max(2 * c, b) >=d)
        {
            flag = false;
        }
    }
    if (flag)
    {
        cout << max(2 * c, b) << endl;
    }
    else
    {
        cout << -1 << endl;
    }
    return 0;
}
