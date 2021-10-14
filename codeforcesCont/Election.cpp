#include <bits/stdc++.h>
using namespace std;
void solve(int a, int b, int c)
{
    if (a == b and b == c)
    {
        cout << 1 << " " << 1 << " " << 1 << endl;
    }
    else if (a > b and a > c)
    {
        cout << 0 << " " << a - b + 1 << " " << a - c + 1 << endl;
    }
    else if (b > a and b > c)
    {
        cout << b - a + 1 << " " << 0 << " " << b - c + 1 << endl;
    }
    else if (c > a and c > b)
    {
        cout << c - a + 1 << " " << c - b + 1 << " " << 0 << endl;
    }
    else if (a == b and a > c)
    {
        cout << 1 << " " << 1 << " " << a - c + 1 << endl;
    }
    else if (a == c and a > b)
    {
        cout << 1 << " " << a - b + 1 << " " << 1 << endl;
    }
    else if (b == c and a < c)
    {
        cout << b - a + 1 << " " << 1 << " " << 1 << endl;
    }
    return;
}

int main()
{
    long long t, a, b, c;
    cin >> t;
    for (long long i = 0; i < t; i++)
    {
        cin >> a >> b >> c;
        solve(a, b, c);
    }
}