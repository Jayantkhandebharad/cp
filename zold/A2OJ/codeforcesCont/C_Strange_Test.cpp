#include <bits/stdc++.h>

using namespace std;
void solve()
{

    long long a, b;
    long long ans = LLONG_MAX;
    cin >> a >> b;
    for (long long i = a; i < b; i++)
    {
        long long bb = 0;
        for (long long j = 20; j >= 0; j--)
        {
            if (b & (1 << j))
            {
                bb += (1 << j);
            }
            else if (i & (1 << j))
            {
                bb += (1 << j);
                break;
            }
        }
        ans = min(ans, i + (bb | i));
    }
    ans = ans + 1 - a - b;
    cout << min(ans, b - a) << endl;
    return;
}

int main()
{
    long long t;
    cin >> t;
    for (long long i = 0; i < t; i++)
    {
        solve();
    }
}