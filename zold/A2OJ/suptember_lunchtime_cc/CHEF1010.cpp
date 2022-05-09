#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int x;
    cin >> x;
    string y;
    cin >> y;
    int a = 0, b = 0;

    for (int i = 0; i < x; i++)
    {
        if (y[i] == '0')
        {
            a++;
        }
        else
        {
            b++;
        }
    }
    int l = min(a, b);
    if (l > 1)
    {
        cout << l - 1 << endl;
    }
    else
    {
        cout << 0 << endl;
    }
    return;
}

int main()
{
    int n;
    string x;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        solve();
    }
}