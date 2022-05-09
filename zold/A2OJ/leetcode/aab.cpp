#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int l;
    string s;
    cin >> l >> s;
    int a = 0, b = 0;
    for (int i = 0; i < l; i++)
    {
        if (s[i] == '0')
        {
            a++;
        }
        else
        {
            b++;
        }
    }

    if (a == b)
    {
        cout << l << endl;
    }
    else if (a == 0 or b == 0)
    {
        cout << 1 << endl;
    }
    else
    {
        cout << min(a, b) * 2 + 1 << endl;
    }
    return;
}
int main()
{
    int t, n;
    string s;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
    return 0;
}