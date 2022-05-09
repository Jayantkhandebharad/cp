#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b)
{
    // Everything divides 0
    if (a == 0)
        return b;
    if (b == 0)
        return a;

    // base case
    if (a == b)
        return a;

    // a is greater
    if (a > b)
        return gcd(a - b, b);
    return gcd(a, b - a);
}

int lcm(int a, int b)
{
    return abs(a * b) / gcd(a, b);
}

void solve(int n)
{
    int min1 = 2147483647;
    int l, s = 0;
    for (int i = n + 1; i < n * n; i++)
    {
        if (abs(gcd(i, n) - lcm(i, n)) < min1 and i % n != 0 and s < 3)
        {
            min1 = abs(gcd(i, n) - lcm(i, n));
            l = i;
            s++;
        }
    }
    cout << l << endl;
    return;
}
int main()
{
    int a, b, c, d;
    cin >> d;
    for (int i = 0; i < d; i++)
    {
        cin >> a;
        solve(a);
    }
}
