#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    string s;
    cin >> s;
    bool flag = false;

    n = s.size();
    for (int i = 0; i < n - 1; i++)
    {
        if ((s[i] - '0') % 2 == 0 and s[i] < s[n - 1])
        {
            swap(s[i], s[n - 1]);
            flag = true;
            break;
        }
    }
    if (!flag)
    {
        for (int i = n - 2; i >= 0; i--)
        {
            if ((s[i] - '0') % 2 == 0)
            {
                swap(s[i], s[n - 1]);
                flag = true;
                break;
            }
        }
    }
    if (flag)
    {
        cout << s << endl;
        return 0;
    }
    cout << -1 << endl;
    return 0;
}