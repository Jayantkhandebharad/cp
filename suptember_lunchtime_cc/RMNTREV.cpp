#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, t;
    string a;
    cin >> t;

    for (int l = 0; l < t; l++)
    {
        cin >> n >> k >> a;
        vector<string> w(n);
        int temp = 0;
        if (k % 2 != 0)
        {
            for (int i = k; i >= 1; i = i - 2)
            {
                w[i - 1] = a[temp++];
            }
            for (int i = 2; i < k; i += 2)
            {
                w[i - 1] = a[temp++];
            }
        }
        else
        {
            for (int i = k; i >= 2; i = i - 2)
            {
                w[i - 1] = a[temp++];
            }
            for (int i = 1; i < k; i += 2)
            {
                w[i - 1] = a[temp++];
            }
        }
        for (int i = 0; i < k; i++)
        {
            cout << w[i];
        }
        for (int i = k; i < n; i++)
        {
            cout << a[i];
        }
        cout << endl;
    }
    return 0;
}