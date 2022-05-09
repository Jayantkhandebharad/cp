#include <bits/stdc++.h>
using namespace std;

void solve(long long n)
{
    cout<<1<<" ";
    for(long long i = 0;i<n;i++){
        long long p = ((long long)1<<i);
        cout<<p<<" ";
    }
    cout<<endl;
    // long long x = pow(2, n);
    // for(int i = 1;i<n;i++){
    //     cout<<i<<" ";
    // }

    // cout<<n-1<<" ";
    // long long sum = (n*(n+1) ) / 2 -1;
    // cout<<x-sum<<endl;
    return;
}

int main()
{
    long long t, n;
    cin >> t;
    for (long long i = 0; i < t; i++)
    {
        cin >> n;
        solve(n);
    }
}
