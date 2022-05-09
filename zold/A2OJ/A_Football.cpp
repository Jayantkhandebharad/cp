#include <bits/stdc++.h>
using namespace std;

int main()
{
    unordered_map<string, int> aa;
    set<string> ab;
    int n;
    cin >> n;
    string s;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        ab.insert(s);
        aa[s]++;
    }
    int q = 0;
    string x, y;

    for (auto i : ab)
    {
        if (q == 0)
        {
            x = i;
            q++;
        }
        else
        {
            y = i;
        }
    }

    if (aa[x] > aa[y])
    {
        cout << x << endl;
    }
    else
    {
        cout << y << endl;
    }
    return 0;
}