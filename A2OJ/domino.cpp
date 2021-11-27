#include <bits/stdc++.h>
using namespace std;
int main()
{
    int l, m, t, x = 0, y = 0;
    int q=0,h=0;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> l >> m;
        if (l % 2 != 0 and m % 2 != 0)
        {
            if (h > 0)
            {
                h = 0;
            }
            else if (h == 0)
            {
                h = 1;
            }
        }
        else if(l%2!=0 and m%2==0 ){
            q++;
        }
        else if( l%2==0 and m%2!=0){
            q++;
        }
        x = x + l;
        y = y + m;
    }
    if (x % 2 == 0 and y % 2 == 0)
    {
        cout << 0 << endl;
    }
    else if (x % 2 != 0 and y % 2 != 0 and t > 1)
    {
        if (h > 0 and q==0)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << 1 << endl;
        }
    }
    else
    {
        cout << -1 << endl;
    }
    return 0;
}
