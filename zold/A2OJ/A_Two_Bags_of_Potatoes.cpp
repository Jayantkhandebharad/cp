#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long i, j, k;
    long long x, y, n;

    cin >> y >> k >> n;

    i = 1;
    j = 0;
    while (k * i <= n)
    {
        if (k * i - y > 0)
        {
            cout << (k * i - y) << " ";
            j++;
        }

        i++;
    }

    if (j <= 0)
        cout << "-1";

    return 0;
}