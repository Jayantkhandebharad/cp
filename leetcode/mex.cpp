#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n + 1, 0);
    int x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (x >= 0 and x <= n)
        {
            v[x] = 1;
        }
    }
    for (int i = 0; i < n + 1; i++)
    {
        if (!v[i])
        {
            cout << i << endl;
            return 0;
        }
    }
    return 0;
}