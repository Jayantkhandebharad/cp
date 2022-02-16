#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, a1, b, b1, c, c1;
    cin >> n >> a >> a1 >> b >> b1 >> c >> c1;
    bool bx = b < a ? true : false;
    bool cx = c < a ? true : false;
    bool by = b1 < a1 ? true : false;
    bool cy = c1 < a1 ? true : false;
    if (bx == cx and by == cy)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}