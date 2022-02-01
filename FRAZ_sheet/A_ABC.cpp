#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;
    cin >> t;
    string s;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        cin >> s;
        if (n <= 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            if (n == 2 and s[0] != s[1])
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}