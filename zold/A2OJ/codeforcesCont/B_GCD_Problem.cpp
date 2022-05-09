#include <bits/stdc++.h>

using namespace std;

bool co__prime(int a, int b)
{
    return (__gcd(a, b) == 1);
}

void pairSu(int n)
{

    int mid11 = n / 2;

    for (int i = mid11; i >= 1; i--)
    {
        if (co__prime(i, n - i) == 1)
        {
            cout << i << " " << n - i << " " << 1 << endl;
            break;
        }
    }
}
int main()
{
    int x;
    cin >> x;
    while (x--)
    {
        int inputt;
        cin >> inputt;
        pairSu(inputt - 1);
    }
    return 0;
}