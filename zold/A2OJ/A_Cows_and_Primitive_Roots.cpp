#include <bits/stdc++.h>
using namespace std;

int main()
{
    int p, count(0);
    cin >> p;
    for (int n = 1; n < p; ++n)
    {
        bool ok = true;
        int x = 1;
        for (int i = 1; i < p - 1; ++i)
        {
            x *= n;
            x %= p;
            if (x == 1)
            {
                ok = false;
                break;
            }
        }
        if (ok)
        {
            x *= n;
            x %= p;
            if (x == 1)
            {
                count += 1;
            }
        }
    }
    printf("%d\n", count);
    return 0;
}
