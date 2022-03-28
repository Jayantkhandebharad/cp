#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<pair<int, int>> a(n), b(m);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].second;
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i].first;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i].second;
    }
    sort(a.begin(), a.end(), greater<int>());
    sort(b.begin(), b.end());
    vector<int> v(m, 0);
    for (int i = 0; i < n; i++)
    {
        int flag = true;
        for (int j = 0; j < m; j++)
        {
            if (!v[j])
            {
                if (b[j].first >= a[i].first and b[j].second >= a[i].second)
                {
                    v[j] = 1;
                    flag = true;
                    break;
                }
                else
                {
                    flag = false;
                }
            }
        }
        if (!flag)
        {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}