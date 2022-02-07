#include <bits/stdc++.h>
using namespace std;

string solve(long long n, long long x, long long y)
{
    int e = 0, o = 0;
    vector<long long> a(n);
    for (long long i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] % 2 == 0)
        {
            e++;
        }
        else
        {
            o++;
        }
    }
    if ((x % 2 == 0 and o % 2 == 0 and y % 2 == 0) || (x % 2 == 1 and o % 2 == 0 and y % 2 == 1) || (x % 2 == 1 and o % 2 == 1 and y % 2 == 0) || (x % 2 == 0 and o % 2 == 1 and y % 2 == 1))
    {
        return "Alice";
    }
    return "Bob";
}

int main()
{
    long long t;
    cin >> t;
    long long x, y, n;
    while (t--)
    {
        cin >> n >> x >> y;
        cout << solve(n, x, y) << endl;
    }
}