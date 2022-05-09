#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int n, m;
    int ans = 0;
    while (t--)
    {
        cin >> n >> m;
        ans = n;
        if (m < n)
        {
            ans += n - m;
        }
        cout << ans << endl;
    }
    return 0;
}