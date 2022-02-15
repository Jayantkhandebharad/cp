#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> ans;
    k = k - n;
    int count = 0;
    while (k >= count)
    {
        ans.push_back(count + 1);
        k -= count;
        k++;
    }

    while ((int)(ans.size()) < n)
    {
        ans.push_back(count - k);
    }
    for (auto i : ans)
    {
        cout << i << " ";
    }
    cout << endl;
    return;
}
int32_t main()
{
    // your code goes here
    int t;
    cin >> t;
    for (int l = 0; l < t; l++)
    {
        solve();
    }
    return 0;
}
