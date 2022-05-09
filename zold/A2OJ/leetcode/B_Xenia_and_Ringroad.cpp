#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> v(m);
    int p = 1;
    long long ans = 0;
    for (int i = 0; i < m; i++)
    {
        cin >> v[i];
        if (v[i] < p)
            ans += n;

        ans = ans + (v[i] - p);

        p = v[i];
    }
    cout << ans << endl;
    return 0;
}