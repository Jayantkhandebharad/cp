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
    if (n <= 3)
    {
        cout << "no" << endl;
        return 0;
    }
    for (int i = 3; i < n; i++)
    {
        for (int j = i - 2; j >= 0; j--)
        {
            if ((a[i] > a[j] and a[i - 1] < a[j]) || (a[i] < a[j] and a[i - 1] > a[j]))
            {
                cout << "yes" << endl;
                return 0;
            }
        }
    }
    cout << "no" << endl;
    return 0;
}