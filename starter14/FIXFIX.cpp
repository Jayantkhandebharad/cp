#include <bits/stdc++.h>
using namespace std;
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define pb push_back
#define var(x) \
    int x;     \
    cin >> x;
#define vi vector<int>
typedef long long ll;

void solve()
{
    int a, n;
    cin >> a >> n;
    if (a - n == 1)
    {
        cout << -1 << endl;
    }
    else if (a == n)
    {
        for (int i = 0; i < n; i++)
        {
            cout << i + 1 << " ";
        }
        cout << endl;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            cout << i + 1 << " ";
        }
        cout << a << " ";
        for (int i = n + 1; i < a; i++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}

int main()
{
    fast;
    ll t = 1;
    cin >> t;
    while (t--)
    {
        //cout << "Case #"<<i<<": ";
        solve();
    }
    return 0;
}

// #include <bits/stdc++.h>

// using namespace std;

// void solve(int n, int k)
// {
//     int x = k;
//     if (k == n - 1)
//     {
//         cout << -1 << endl;
//     }
//     else if (k >= 0 and k <= n and n > 2)
//     {
//         for (int j = 0; j < n - 1; j++)
//         {
//             if (k > 0)
//             {
//                 k--;
//                 cout << j + 1 << " ";
//             }
//             else
//             {
//                 cout << j + 2 << " ";
//             }
//         }
//         cout << x + 1 << endl;
//     }
//     else if (n == 2 and k == 2)
//     {
//         cout << 1 << " " << 2 << endl;
//     }
//     else if (n == 1 and k == 1)
//     {
//         cout << 1 << endl;
//     }
//     else
//     {
//         cout << -1 << endl;
//     }
// }
// int main()
// {
//     int t, n, k;
//     cin >> t;
//     for (int i = 0; i < t; i++)
//     {
//         cin >> n >> k;

//         solve(n, k);
//     }
// }
