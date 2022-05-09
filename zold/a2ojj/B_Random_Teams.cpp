#include <bits/stdc++.h>
using namespace std;

long long f(long long a)
{
    a = a * (a - 1);
    a = a / 2;
    return a;
}

long long c(int a, int b)
{
    int x;
    x = a % b;

    int y = a / b;
    long long qq;

    qq = f(y) * (b - x) + f(y + 1) * x;

    return qq;
}

int main()
{
    int n, m;
    cin >> n >> m;
    long long a = n - m + 1;
    cout << c(n, m) << " ";
    cout << f(a) << endl;

    return 0;
}