#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, x, y, p, q;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> x >> y >> p >> q;
        x += p * 10;
        y += q * 10;
        if (x > y)
        {
            cout << "Chefina" << endl;
        }
        else if (x < y)
        {
            cout << "Chef" << endl;
        }
        else
        {
            cout << "Draw" << endl;
        }
    }
    return 0;
}