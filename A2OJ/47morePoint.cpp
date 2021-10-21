#include <bits/stdc++.h>
using namespace std;

int points(int p, int t)
{
    int s = 3 * p / 10;
    int r = p - p * t / 250;
    return max(s, r);
}

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int m = points(a, c);
    int v = points(b, d);
    if (m > v)
    {
        cout << "Misha" << endl;
    }
    else if (v > m)
    {
        cout << "Vasya" << endl;
    }
    else
    {
        cout << "Tie" << endl;
    }
    return 0;
}