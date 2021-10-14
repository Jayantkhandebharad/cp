#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FAST1 ios_base::sync_with_stdio(false);
#define FAST2 cin.tie(NULL);

void fast_solve()
{
    ll n, k;
    cin >> n >> k;
    ll arr[k];
    for (ll i = 0; i < k; i++)
        cin >> arr[i];
    sort(arr, arr + k);
    int val = 0, ct = 0;
    for (int i = k - 1; i >= 0; i--)
    {
        if (val + n - arr[i] <= n)
        {
            ct++;
            val += n - arr[i];
        }
        else
            break;
    }
    int ans = ct, pos = 0, st = k - ct;
    for (int i = k - ct; i < k; i++)
    {
        if (pos >= arr[i])
        {
            pos += n - arr[st++];
            ans--;
        }
        pos += n - arr[i];
    }
    cout << ans << endl;
}

int main()
{
    FAST1;
    FAST2;
    ll t = 1;
    cin >> t;
    while (t--)
    {
        fast_solve();
    }
}