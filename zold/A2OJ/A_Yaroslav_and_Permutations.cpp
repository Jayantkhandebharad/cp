#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    unordered_map<int, int> aa;
    set<int> ab;
    cin >> n;
    int x;
    int max1 = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        aa[x]++;
        if (max1 < aa[x])
        {
            max1 = aa[x];
        }
    }
    if (n % 2 == 0)
    {
        if (max1 <= n / 2)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
    }
    else
    {
        if (max1 <= n / 2 + 1)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
    }
    return 0;
}