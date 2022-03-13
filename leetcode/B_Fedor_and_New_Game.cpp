#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, k;

    cin >> n >> m >> k;
    vector<int> v(m + 1);
    for (int i = 0; i < m + 1; i++)
    {
        cin >> v[i];
    }
    int x, friends = 0, t = 0;

    x = v[m];
    for (int i = 0; i < m; i++)
    {
        t = 0;
        for (int j = 0; j < n; j++)
        {
            if (((v[i] >> j) & 1) != ((x >> j) & 1))
            {
                t++;
            }
        }
        if (t <= k)
        {
            friends++;
        }
    }
    cout << friends << endl;
    return 0;
}