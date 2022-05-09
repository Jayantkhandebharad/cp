#include <bits/stdc++.h>

using namespace std;

void solve()
{

    long long x;
    cin >> x;
    vector<long long> v(x);
    for (int i = 0; i < x; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    long long l = x - 1;
    long long s = v[l] - v[0];
    s = s * v[l - 1];
    cout << s << endl;
    return;
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        solve();
    }
    return 0;
}
