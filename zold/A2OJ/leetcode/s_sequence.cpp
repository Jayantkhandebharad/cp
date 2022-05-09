#include <bits/stdc++.h>
using namespace std;
bool solve(vector<int> &x, vector<int> &a, vector<int> &b, int i, int k, bool &flag)
{
    if (i >= x.size())
    {
        return true;
    }
    if (flag)
    {
        return false;
    }
    bool p = false;
    bool q = false;
    if (x[i - 1] - a[i] <= k)
    {
        x[i] = a[i];
        p = solve(x, a, b, i + 1, k, flag);
    }

    if (x[i - 1] - b[i] <= k)
    {
        x[i] = b[i];
        q = solve(x, a, b, i + 1, k, flag);
    }
    if (!p and !q)
    {
        flag = true;
    }

    return p or q;
}
int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    vector<int> x(n, 0);
    bool flag = false;
    x[0] = a[0];
    if (solve(x, a, b, 1, k, flag))
    {
        cout << "Yes" << endl;
        return 0;
    }
    x[0] = b[0];
    if (solve(x, a, b, 1, k, flag))
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}