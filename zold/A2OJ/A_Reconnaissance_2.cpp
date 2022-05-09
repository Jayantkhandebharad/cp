#include <bits/stdc++.h>
using namespace std;

int main()
{

    int rr(1000);
    int n, a1;
    int cur, ind1, ind2;
    cin >> n >> a1;
    int prev(a1);
    for (int i = 2; i <= n; ++i)
    {
        cin >> cur;
        int diff = abs(cur - prev);
        if (diff < rr)
        {
            rr = diff;
            ind1 = i - 1;
            ind2 = i;
        }
        prev = cur;
    }
    int diff = abs(a1 - prev);
    if (diff < rr)
    {
        ind1 = n;
        ind2 = 1;
    }
    cout << ind1 << " " << ind2 << endl;
    return 0;
}