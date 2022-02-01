#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n;
    cin >> n;

    long long godlynx = log2(n - 1);
    long long beast = ((long long)1 << godlynx);
    for (long long i = beast - 1; i >= 0; i--)
    {
        cout << i << " ";
    }
    for (long long i = beast; i < n; i++)
    {
        cout << i << " ";
    }
    cout << endl;
    ;
}

int main()
{
    int t;
    long long n;
    cin >> t;
    long long x = 1;
    for (int i = 0; i < t; i++)
    {
        solve();
        }
    return 0;
}