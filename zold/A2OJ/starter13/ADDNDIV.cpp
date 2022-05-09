//to solve it,...b should be devisible by all prime factor of a and we are given that can add x to a any number of times

// step1: check all rpime factor of a
//step 2: check if b%p =0 for all p ...p=prime factor of a
// step 3: if step 2 is true then print YES otherwise NO

#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

vector<int> getFactor(int n)
{
    vector<int> v;
    while (n % 2 == 0)
    {
        v.push_back(2);
        n = n / 2;
    }

    for (int i = 3; i * i <= n; i = i + 2)
    {
        while (n % i == 0)
        {
            v.push_back(i);
            n = n / i;
        }
    }

    if (n > 2)
    {
        v.push_back(n);
    }

    return v;
}

void solve()
{
    int a, b;
    cin >> a >> b;
    vector<int> v = getFactor(a);
    for (int x : v)
    {
        if (b % x)
        {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
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

//I have tried as...
// void solve(long long a, long long b)
// {
//     vector<long long> aa;
//     for (int i = 0; i < 10; i++)
//     {
//         aa.push_back(pow(b, i));
//     }
//     int x = 0;
//     while (x < 1000000000)
//     {
//         x = x + a;
//         for (int i = 0; i < 10; i++)
//         {
//             if (x == aa[i])
//             {
//                 cout << "YES" << endl;
//                 return;
//             }
//         }
//
//     }
//     cout << "NO" << endl;
//     return;
// }

// int main()
// {

//     long long x, a, b, c, d, t;
//     cin >> t;
//     while (t--)
//     {
//         cin >> a >> b;
//         solve(a, b);
//     }
// }
