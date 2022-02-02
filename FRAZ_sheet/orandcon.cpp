#include <bits/stdc++.h>
using namespace std;

int setBitNumber(int n)
{
    if (n == 0)
        return 0;

    int msb = 0;
    n = n / 2;
    while (n != 0)
    {
        n = n / 2;
        msb++;
    }

    return (1 << msb);
}

int main()
{
    int t;
    cin >> t;
    long long a, b, c, d;
    for (int i = 0; i < t; i++)
    {
        cin >> a;

        b = a;
        c = a;
        c += 2 * setBitNumber(a);
        if (a == 0)
        {
            cout << 0 << " " << 1 << " " << 2 << endl;
        }
        else
        {
            cout << 0 << " " << b << " " << c << endl;
        }
    }
    return 0;
}