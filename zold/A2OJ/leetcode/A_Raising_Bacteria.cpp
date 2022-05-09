#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long x, t = 0;
    cin >> x;
    while (x / 2 != 0)
    {
        if (x % 2 == 1)
        {
            t++;
        }
        x /= 2;
    }
    cout << t + 1 << endl;
    return 0;
}