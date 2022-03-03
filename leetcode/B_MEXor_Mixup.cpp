#include <bits/stdc++.h>
using namespace std;

int computeXOR(int n)
{

    // If n is a multiple of 4
    if (n % 4 == 0)
        return n;

    // If n%4 gives remainder 1
    if (n % 4 == 1)
        return 1;

    // If n%4 gives remainder 2
    if (n % 4 == 2)
        return n + 1;

    // If n%4 gives remainder 3
    return 0;
}

int main()
{
    int t, n, m;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        int x = computeXOR(n - 1);
        if (m == x)
        {
            cout << n << endl;
            continue;
        }
        else if ((x ^ m) != n)
        {
            cout << n + 1 << endl;
            continue;
        }

        cout << n + 2 << endl;
    }
    return 0;
}
//208505 279723 250308 125505 140893 82738 24014 169235 279719 238048
