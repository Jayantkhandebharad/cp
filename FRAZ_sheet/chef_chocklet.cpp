#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        map<string, int> m;
        string s;
        for (int i = 0; i < n; i++)
        {
            cin >> s;
            m[s] += 1;
        }
        int size = m.size();
        int req = n / 2;
        bool flag = false;
        for (auto c : m)
        {
            if (c.second > req)
            {
                flag = true;
                cout << c.first << "\n";
                break;
            }
        }
        if (!flag)
        {
            cout << -1 << "\n";
        }
    }
    return 0;
}