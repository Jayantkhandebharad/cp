#include <iostream>
using namespace std;

int main()
{
    long long a, b, c, d, e;
    cin >> a >> b;
    c = 0;
    d = 1;
    while (d < b)
    {
        d *= a;
        c++;
    }
    if (b == d)
    {
        cout << "YES" << endl;
        cout << c - 1 << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}