#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    int x = 0;
    double max1 = 0;
    vector<int> vis;
    while (x < n)
    {
        for (int = 0; i < n; i++)
        {
            if (b[i] == 0)
            {
                vis.push_back(a[i]);
            }
        }
    }
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