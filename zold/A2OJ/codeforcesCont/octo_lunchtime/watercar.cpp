#include <bits/stdc++.h>

using namespace std;

void solve()
{
    long long n, v;
    cin >> n >> v;

    cout<<(long long)n*(n-1)/2<<" ";
    if (v>=n-1)
    {
        cout<<n-1<<endl;
    }
    else{

        long long sum = (n - v) * (n - v + 1) / 2;
        cout << v + sum - 1 << endl;
    }

    return;
}
int main()
{
    long long n, t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
    return 0;
}
