#include <bits/stdc++.h>
using namespace std;

void solve(int a)
{
    cout << a << " ";
    for (int i = 1; i < a; i++)
    {
        cout << i << " ";
    }
    return;
}

int main()
{
    int t, a;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> a;
        solve(a);
    }
    return 0;
}
