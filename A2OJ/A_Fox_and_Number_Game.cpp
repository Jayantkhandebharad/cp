#include <bits/stdc++.h>
using namespace std;

int gcd(int b, int a)
{
    if (a == 0)
    {
        return b;
    }

    return gcd(a, b % a);
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int min1 = v[0];
    for (int i = 0; i < n; i++)
    {
        if (min1 > gcd(v[i], min1))
        {
            min1 = gcd(v[i], min1);
                }
    }
    cout << min1 * n;
    return 0;
}
