#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main()

{

    int test;
    cin >> test;
    while (test--)
    {
        long long xx1, aa1, b;

        cin >> xx1 >> aa1 >> b;
        if (xx1 % aa1 == 0)
        {
            long long p = xx1 / aa1;
            long long den = b * p;
            long long sum = 0;
            for (int i = 1; i <= sqrtl(den); i++)
            {
                if (sum > xx1)
                    break;
                if (den % i == 0)
                {
                    sum = sum + i;
                    if (den / i != i)
                        sum = sum + den / i;
                }
            }
            if (sum != xx1)
            {
                cout << -1 << endl;
            }
            else
                cout << den << endl;
        }
        else
            cout << -1 << endl;
    }
}