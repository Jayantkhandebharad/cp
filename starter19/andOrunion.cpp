#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t, n;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        vector<int> a(n);
        for (int j = 0; j < n; j++)
        {
            cin >> a[i];
        }
        vector<int> b;
        for (int j = 0; j < n; j++)
        {
            for (int k = j; k < n; k++)
            {
                b.push_back(a[j] && a[k]);
            }
        }
        int q = b.size();

        for (int j = 0; j < q; j++)
        {
            b[0] = b[0]|b[b.size()-1];
            b.pop_back();
            sort(b.begin(),b.end());
        }
        cout << b[0]<< endl;
    }
}
