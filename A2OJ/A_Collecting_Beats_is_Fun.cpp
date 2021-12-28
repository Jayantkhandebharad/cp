#include <bits/stdc++.h>
using namespace std;

int main()
{
    int aa[10] = {0};
    int k;
    cin >> k;
    char x;
    for (int i = 0; i < 16; i++)
    {
        cin >> x;
        if (x != '.')
        {
            aa[x - '0']++;
        }
    }
    bool flag = false;
    for (int i = 0; i < 10; i++)
    {
        if (aa[i] > 2 * k)
        {
            flag = true;
            break;
        }
    }

    if (flag)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }
    return 0;
}