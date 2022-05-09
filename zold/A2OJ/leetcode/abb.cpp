#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int a = 0, b = 0;
    if (n % 2 == 0)
    {
        cout << n / 2 << endl;
        return;
    }
    cout << (-1) * (n / 2 + 1) << endl;
    return;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}