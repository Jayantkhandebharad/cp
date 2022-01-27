#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int a, b, c, d;
    cin >> a;
    cin >> b >> c;
    if (b == a)
    {
        a = c;
    }
    else if (c == a)
    {
        a = b;
    }

    cin >> b >> c;
    if (b == a)
    {
        a = c;
    }
    else if (c == a)
    {
        a = b;
    }
    cin >> b >> c;
    if (b == a)
    {
        a = c;
    }
    else if (c == a)
    {
        a = b;
    }
    cout << a << endl;

    return 0;
}