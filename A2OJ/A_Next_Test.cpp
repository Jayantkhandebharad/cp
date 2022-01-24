#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    for (int i = 0; i < n + 1; i++)
    {
        if (i < n and a[i] != i + 1)
        {
            cout << i + 1 << endl;
            return 0;
        }
    }
    cout << n + 1 << endl;
    return 0;
}