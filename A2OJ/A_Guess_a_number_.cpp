#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string a, b, c;
    int mx = INT_MAX, mn = INT_MIN;
    vector<int> small, big;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b >> c;
        if (a == ">")
        {
            if (c == "Y")
            {
                mn = max(mn, stoi(b) + 1);
            }
            else
            {
                mx = min(mx, stoi(b));
            }
        }
        else if (a == "<")
        {
            if (c == "N")
            {
                mn = max(mn, stoi(b));
            }
            else
            {
                mx = min(mx, stoi(b) - 1);
            }
        }
        else if (a == ">=")
        {
            if (c == "Y")
            {
                mn = max(mn, stoi(b));
            }
            else
            {
                mx = min(mx, stoi(b) - 1);
            }
        }
        else
        {
            if (c == "N")
            {
                mn = max(mn, stoi(b) + 1);
            }
            else
            {
                mx = min(mx, stoi(b));
            }
        }
    }
    if (mx < mn)
    {
        cout << "Impossible" << endl;
    }
    else if (n != 1 and mx != INT_MAX and mn != INT_MIN)
    {
        int mid = (mn + mx) / 2;
        cout << mid << endl;
    }
    else
    {
        if (mx != INT_MAX)
        {
            cout << mx << endl;
        }
        else
        {
            cout << mn << endl;
        }
    }
    return 0;
}