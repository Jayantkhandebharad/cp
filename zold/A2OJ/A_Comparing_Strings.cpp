#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a, b;
    unordered_map<char, int> r;
    cin >> a >> b;
    if (a.size() != b.size())
    {
        cout << "NO" << endl;
        return 0;
    }
    int x = 0;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == b[i])
        {
            x++;
        }
        r[a[i]]++;
        r[b[i]]--;
    }
    for (auto i : r)
    {
        if (i.second != 0)
        {
            cout << "NO" << endl;
            return 0;
        }
    }
    if (x >= a.size() - 2)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}