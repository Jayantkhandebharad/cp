#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    unordered_map<long long, long long> a;
    for (long long i = 1; i < sqrt(n) * 2; i++)
    {
        long long j = i + 1;
        if (a[n - (i * j) / 2] || i * j == n)
        {
            cout << "YES" << endl;
            return 0;
        }
        a[(i * j) / 2] = i;
    }
    cout << "NO" << endl;
}