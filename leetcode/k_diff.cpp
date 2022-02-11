#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    if (k == n * (n + 1) / 2)
    {
        for (int i = 1; i < n + 1; i++)
        {
            cout << i << " ";
        }
        cout << endl;
        return;
    }
    int x = k - n + 1;
    int ll = x;
    if (n % x)
    {
        x = n / x + 1;
    }
    else
    {
        x = n / x;
    }

    int j = 0;
    while (j < ll)
    {
        for (int i = x * j; i < x * (j + 1) and i < n; i++)
        {
            cout << j + 1 << " ";
        }
        j++;
    }
    cout << endl;
}
int main()
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
