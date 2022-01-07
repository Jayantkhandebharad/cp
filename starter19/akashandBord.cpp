#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    int x, y, n;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        cin >> n >> x >> y;
        if ((x + y) % 2 == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << 1 << endl;
        }
    }
    return 0;
}