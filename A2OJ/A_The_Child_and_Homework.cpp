#include <bits/stdc++.h>
using namespace std;

int main()
{

    int i, j, k;
    int n, m, cnt = 0, idx;

    n = 4;
    int len[n];
    string s;

    for (i = 0; i < n; i++)
        cin >> s, len[i] = s.length() - 2;

    for (i = 0; i < n; i++)
    {
        k = 0;
        m = 0;
        for (j = 0; j < n; j++)
        {
            if (i == j)
                continue;

            // twice shorter
            if (len[i] * 2 <= len[j])
                k++;

            else if (len[i] >= len[j] * 2)
                m++;
        }

        if (k == 3 || m == 3)
        {
            cnt++;
            idx = i;
        }
    }

    if (cnt == 1)
        cout << char(idx + 'A');
    else
        cout << 'C';

    return 0;
}
