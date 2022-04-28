#include <bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{

    string a;

    cin >> a;
    if (a[0] != '9' and '9' - a[0] < a[0] - '0')
    {
        a[0] = '9' - a[0] + '0';
    }
    for (int i = 1; i < a.size(); i++)
    {
        if ('9' - a[i] < a[i] - '0')
        {
            a[i] = '9' - a[i] + '0';
        }
    }
    cout << a << endl;
    return 0;
}
