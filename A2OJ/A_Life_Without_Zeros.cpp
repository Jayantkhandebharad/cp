#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long a, b, c, d;
    cin >> a >> b;
    c = a + b;
    string x, y, z;
    x = to_string(a);
    y = to_string(b);
    z = to_string(c);

    x.erase(std::remove(x.begin(), x.end(), '0'), x.end());
    y.erase(std::remove(y.begin(), y.end(), '0'), y.end());
    z.erase(std::remove(z.begin(), z.end(), '0'), z.end());

    long long p, q, r;

    p = stoll(x);
    q = stoll(y);
    r = stoll(z);
    if ((p + q) != r)
    {
        cout << "NO";
    }
    else
    {
        cout << "YES";
    }
}