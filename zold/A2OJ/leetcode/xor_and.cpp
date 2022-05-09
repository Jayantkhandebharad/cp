#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<long long> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vector<long long> bit(33, 0);
    long long ans = 0;
    for (long long i = 0; i < n; i++)
    {
        bit[log2(v[i]) + 1]++;
    }
    for (long long i = 0; i < 33; i++)
    {
        ans += bit[i] * (bit[i] - 1) / 2;
    }

    cout << ans << endl;
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