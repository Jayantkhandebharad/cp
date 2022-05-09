#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    int n, m;
    char aabbc[110][110];
    cin >> n >> m;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cin >> aabbc[j][i];
            if (aabbc[j][i] == '.')
            {
                if ((j + i) % 2 == 0)
                    aabbc[j][i] = 'B';
                else
                    aabbc[j][i] = 'W';
            }
        }
    }
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
            cout << aabbc[j][i];
        cout << endl;
    }
    return 0;
}