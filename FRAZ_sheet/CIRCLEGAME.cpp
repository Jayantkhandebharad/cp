// #include <bits/stdc++.h>
// using namespace std;

// void solve(long long m, long long x)
// {
//     if (m == 2)
//     {
//         for (long long i = 1; i <= x; i++)
//         {
//             cout << 1 << " ";
//         }
//         cout << endl;
//     }
//     else if (m % 2 != 0)
//     {
//         if (x < m)
//         {
//             for (long long i = 1; i <= x; i++)
//             {
//                 cout << i << " ";
//             }
//             cout << endl;
//         }
//         else
//         {
//             for (long long i = 1; i < m; i++)
//             {
//                 cout << i << " ";
//             }
//             for (int i = m; i <= x; i++)
//             {
//                 cout << m - 1 << " ";
//             }
//             cout << endl;
//         }
//     }
//     else if (m % 2 == 0 and m != 2)
//     {
//         if (x <= m - 2)
//         {
//             for (long long i = 1; i <= x; i++)
//             {
//                 cout << i << " ";
//             }
//             cout << endl;
//         }
//         else
//         {
//             for (long long i = 1; i <= m - 2; i++)
//             {
//                 cout << 1 << " ";
//             }
//             for (long long i = m - 1; i <= x; i++)
//             {
//                 cout << 2 << " ";
//             }
//             cout << endl;
//         }
//     }
// }

// int main()
// {
//     long long t, a, b;
//     cin >> t;
//     for (int i = 0; i < t; i++)
//     {
//         cin >> a >> b;

//         solve(a, b);
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int m, x;
    int a = 1;
    vector<int> v;

    cin >> m >> x;
    int arr[x];
    m--;
    int p;
    arr[0] = 1;
    for (int i = 1; i < x; i++)
    {

        p = (m % (i + 1)) + 1;
        if (arr[i - 1] < p)
        {
            arr[i] = arr[i - 1];
        }
        else
            arr[i] = arr[i - 1] + 1;
    }
    for (int i = 0; i < x; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}