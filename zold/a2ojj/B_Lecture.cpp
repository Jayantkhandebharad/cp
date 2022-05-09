#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    unordered_map<string, string> a, b;
    string x, y;
    for (int i = 0; i < m; i++)
    {
        cin >> x >> y;
        a[x] = y;
        b[y] = x;
    }
    vector<string> s(n);

    for (int i = 0; i < n; i++)
    {
        cin >> x;
        s[i] = x;
    }
    for (int i = 0; i < n; i++)
    {
        string x = s[i];
        if (a.find(x) != a.end())
        {
            if (x.size() <= a[x].size())
            {
                s[i] = x;
            }
            else
            {
                s[i] = a[x];
            }
        }
        else
        {
            if (x.size() <= b[x].size())
            {
                s[i] = x;
            }
            else
            {
                s[i] = b[x];
            }
        }
    }
    for (auto i : s)
    {
        cout << i << " ";
    }
    return 0;
}