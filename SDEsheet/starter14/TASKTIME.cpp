#include <bits/stdc++.h>

using namespace std;
void solve(int n, int m, int k, vector<int> cc, vector<int> tt, multimap<int, int> aab, multimap<int, int> aac)
{
    int hh=0;
    set<int> x;
    for (auto a = 0; a < tt.size(); a++)
    {
        if (x.count(cc[a]))
        {
            continue;
        }
        k = k - tt[a];
        hh++;
    }
    cout << hh-2 << endl;
}

int main()
{
    int t, n, m, k, z;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        cin >> n >> m >> k;
        vector<int> cc;
        vector<int> tt;
        map<int, int> ab;
        for (int j = 0; j < n; j++)
        {
            cin >> z;
            cc.push_back(z);
        }
        multimap<int, int> aab;
        multimap<int, int> aac;
        for (int j = 0; j < n; j++)
        {
            cin >> z;
            tt.push_back(z);

            aab.insert(make_pair(tt[j], cc[j]));
            aac.insert(make_pair(cc[j], tt[j]));
        }
        solve(n, m, k, cc, tt, aab, aac);
    }
}
