#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, a, i, sum, e = 0, o = 0, r, c;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> r >> c;

        if (c == 1)
        {
            cout << "YES" << endl;
            for (int j = 1; j < r + 1; j++)
            {
                cout << j << endl;
            }
            continue;
        }
        else if (r % 2)
        {
            cout << "NO" << endl;
            continue;
        }
        cout << "YES" << endl;
        for (int j = 1; j < c * r; j += 2)
        {
            int l = 0;

            while (l < c)
            {
                cout << j << " ";
                l++;
                j += 2;
            }
            j -= 2;
            cout << endl;
        }

        for (int j = 2; j < c * r; j += 2)
        {
            int l = 0;

            while (l < c)
            {
                cout << j << " ";
                l++;
                j += 2;
            }
            j -= 2;
            cout << endl;
        }
    }
    return 0;
}