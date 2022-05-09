#include <bits/stdc++.h>

using namespace std;
int main()
{
    long long n, t;
    cin >> t;

    while (t--)
    {
        cin >> n;
        if (n % 2 == 0)
        {
            cout << 2 * n << " " << n << endl;
        }
        else
        {
            vector<int> aa = {3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 54, 59, 61, 67, 71, 73};
            for (auto x : aa)
            {
                if (n % x)
                {
                    cout << n * x << " " << n * (x - 1) << endl;
                    break;
                }
            }
        }
    }
    return 0;
}