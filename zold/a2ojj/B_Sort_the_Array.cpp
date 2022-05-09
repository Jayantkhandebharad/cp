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

    vector<int> b = a;
    sort(a.begin(), a.end());
    if (a == b)
    {
        cout << "yes" << endl;
        cout << 1 << " " << 1 << endl;
        return 0;
    }
    int x = 0;
    int q = 0, r = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != b[i])
        {
            x = i;
            break;
        }
    }
    int y = n - 1;
    for (int i = n - 1; i >= 0; i--)
    {
        if (a[i] != b[i])
        {
            y = i;
            break;
        }
    }
    //cout << x << " " << y << endl;
    reverse(b.begin() + x, b.begin() + y + 1);

    cout << endl;
    if (a == b)
    {
        cout << "yes" << endl;
        cout << x + 1 << " " << y + 1 << endl;
    }
    else
    {
        cout << "no" << endl;
    }
    return 0;
}
