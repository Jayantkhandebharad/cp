#include <bits/stdc++.h>
using namespace std;

bool f(long long x, long long y, vector<long long> &a, long long i)
{
    if (x == y and a.size() == i)
    {
        return true;
    }
    else if (i == a.size())
    {
        return false;
    }
    //cout << x << " ";
    return f(x + a[i], y, a, i + 1) || f(x ^ a[i], y, a, i + 1);
}

string solve(long long n, long long x, long long y)
{
    vector<long long> a(n);
    for (long long i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    if (f(x, y, a, 0))
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