#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        long long aa;
        long long sum = 0;
        long long min1 = INT_MAX;

        int xx;
        for (int j = 0; j < n; j++)
        {
            cin >> aa;
            sum += aa;

            if (min1 > aa)
            {
                min1 = min(aa, min1);
                xx = j;
            }
        }
        int qq = log2(sum);
        int target = pow(2, qq + 1) - sum;
        if (sum == pow(2, qq))
        {
            cout << 0 << endl;
        }
        else
        {
            target += min1;
            cout << 1 << endl;
            cout << 1 << " " << (target / min1) << endl;
            cout << xx + 1 << endl;
        }
    }
    return 0;
}