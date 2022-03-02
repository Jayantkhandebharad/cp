#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int n;

    for (int i = 0; i < t; i++)
    {
        cin >> n;
        vector<int> v(n);
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            cin >> v[j];
            sum = sum | v[j];
        }
        cout << sum << endl;
    }
}