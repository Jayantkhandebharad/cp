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
    for (int i = 0; i < n - 1; ++i)
    {
        for (int j = 0; j < n - 1; ++j)
        {
            if ((min(a[i], a[i + 1]) < min(a[j], a[j + 1]) && min(a[j], a[j + 1]) < max(a[i], a[i + 1]) && max(a[i], a[i + 1]) < max(a[j], a[j + 1])) ||
                (min(a[j], a[j + 1]) < min(a[i], a[i + 1]) && min(a[i], a[i + 1]) < max(a[j], a[j + 1]) && max(a[j], a[j + 1]) < max(a[i], a[i + 1])))
            {
                cout << "yes" << endl;
                return 0;
            }
        }
    }
    cout << "no" << endl;
    return 0;
}