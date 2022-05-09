#include <bits/stdc++.h>
using namespace std;

void solve(int n)
{
    vector<int> a(n);
    cin >> a[0];
    vector<int> y(n, 0);
    cout << 0 << " ";
    for (int i = 1; i < n; i++)
    {
        int x = 0;
        cin >> a[i];
        for (int j = 0; j < 32; j++)
        {
            if ((((a[i - 1]) & (1 << j)) or ((y[i - 1]) & (1 << j))) and !(a[i] & (1 << j)))
            {
                x += (1 << j);
            }
        }
        y[i] = x;
        cout << x << " ";
    }
    cout << endl;
    return;
}
int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        solve(n);
    }
    return 0;
}
