#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c;
    d = sqrt((a * b) / c) * 4;
    d += sqrt((b * c) / a) * 4;
    d += sqrt((a * c) / b) * 4;
    cout << d;
    return 0;
}