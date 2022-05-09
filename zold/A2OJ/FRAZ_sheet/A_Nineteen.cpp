#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    unordered_map<char, int> a;
    cin >> s;
    for (auto i : s)
    {
        a[i]++;
    }

    int q = (a['e']) / 3;
    q = min(q, a['i']);
    q = min(q, a['t']);
    if (a['n'] >= 3)
    {
        q = min(1 + (a['n'] - 3) / 2, q);
    }
    else
    {
        q = 0;
    }
    cout << q << endl;
    return 0;
}