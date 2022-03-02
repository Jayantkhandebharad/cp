#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, l;
        cin >> n >> l;
        vector<int> a(n);
        vector<int> b(30, 0);
        for (int j = 0; j < n; j++)
        {
            cin >> a[j];
            for (int k = 0; k < 31; k++)
            {
                if (a[j] & (1 << k))
                {
                    b[k]++;
                }
            }
        }
        long long x = 0, max1;

        for (int k = l - 1; k >= 0; k--)
        {
            if (b[k] > n / 2)
            {
                x += (1 << k);
            }
        }
        cout << x << endl;
    }
    return 0;
}