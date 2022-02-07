#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, i, sum, odd, min_odd;
    while (cin >> n)
    {
        sum = 0;
        odd = 0;
        min_odd = INT_MAX;
        for (i = 0; i < n; i++)
        {
            cin >> a;
            sum += a;
            if (a % 2)
                odd++;
            if (a % 2 && a < min_odd)
                min_odd = a;
        }
        if (odd && odd % 2 == 0)
            sum -= min_odd;
        else if (!odd)
            sum = 0;
        cout << sum << endl;
    }
    return 0;
}