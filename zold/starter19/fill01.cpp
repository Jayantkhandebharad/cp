#include <bits/stdc++.h>
using namespace std;

void solve(int n, int k)
{
    string a;
    cin >> a;

    int q = 0;
    int d = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == '0')
        {
            q++;
            if (q >= k)
            {
                d++;
                q = 0;
            }
        }
        else
        {
            q = 0;
        }
    }
    cout << d << endl;
    return;
}
int main()
{
    int t, n, k;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n >> k;
        solve(n, k);
    }
}
