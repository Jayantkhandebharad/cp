#include <bits/stdc++.h>
using namespace std;

bool s()
{
    long long n;
    long long max1 = -1;
    cin >> n;
    vector<long long> v(n), ans;
    set<long long> has1;

    for (long long i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    for (long long i = 0; i < n; i++)
    {

        if (v[i] == -1)
            continue;
        if (v[i] > i + 1)
        {
            return false;
        }
        else
        {

            if (v[i] == max1)
            {
                v[i] = -1;
                continue;
            }
            else if (v[i] < max1)
            {
                return false;
            }
            else
            {
                max1 = v[i];
            }
            has1.insert(v[i]);
        }
    }

    set<long long> hasn;

    for (long long i = 0; i < 2 * n + 5; i++)
    {
        if (!has1.count(i))
        {
            hasn.insert(i);
        }
    }
    long long used = 0;
    for (long long i = 0; i < n; i++)
    {
        if (v[i] == -1 || !used)
        {
            ans.push_back(*hasn.begin());
            hasn.erase(hasn.begin());
            if (v[i] != -1)
                used = 1;
        }
        else
        {
            ans.push_back(*has1.begin());
            has1.erase(has1.begin());
        }
    }
    for (long long i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
    return true;
}

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        if (!s())
        {
            cout << -1 << endl;
        }
    }
    return 0;
}