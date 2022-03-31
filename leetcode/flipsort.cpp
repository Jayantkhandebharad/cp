#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int front = 0;
    int rare = n - 1;
    if (s[front] == '0')
    {
        while (s[front] == '0')
        {
            front++;
        }
    }
    else if (s[front] == '1')
    {
        while (s[front] == '1')
        {
            front++;
        }
    }
    while (s[rare] == '1')
    {
        rare--;
    }
    int aa = 0;
    vector<pair<int, int>> v;

    while (front <= rare)
    {
        aa++;
        for (int i = front; i <= rare; i++)
        {
            if (s[i] == '1')
            {
                s[i] = '0';
            }
            else if (s[i] == '0')
            {
                s[i] = '1';
            }
        }
        v.push_back({front, rare});
        while (s[front] == '1')
        {
            front++;
        }
        while (s[rare] == '1')
        {
            rare--;
        }
    }
    // for (int i = front; i < rare + 1; i++)
    // {
    //     bool flag = false;
    //     int l = i;
    //     while (s[i] == '0')
    //     {
    //         i++;
    //         flag = true;
    //     }
    //     if (flag)
    //     {
    //         aa++;
    //         v.push_back({l, i});
    //     }
    // }
    cout << aa << endl;
    for (auto i : v)
    {
        cout << i.first << " " << i.second << endl;
    }
    return;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        solve();
    }
    return 0;
}