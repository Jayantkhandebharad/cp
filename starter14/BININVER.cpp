#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n, x;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        int min1 = -1;
        vector<int> aa;
        for (int i = 0; i < n; i++)
        {
            int l = 0;
            cin >> x;
            while (x % 2 != 1)
            {
                x = floor(x / 2);
                l += 1;
            }
            if (min1 == -1)
            {
                min1 = l;
            }
            else
            {
                min1 = min(min1, l);
            }
        }
        cout << min1 << endl;
    }
}