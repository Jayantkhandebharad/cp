

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, a;
    cin >> n >> k;

    if (k / n >= 3)
    {
        cout << 0 << endl;
    }
    else
    {
        a = k % n;
        cout << n - a << endl;
    }
    return 0;
}