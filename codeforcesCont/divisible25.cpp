
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FAST1 ios_base::sync_with_stdio(false);
#define FAST2 cin.tie(NULL);

void fast_solve()
{
    string s;
    cin >> s;
    int minn = s.size();
    int n = s.size();
    for (int i = s.size() - 1; i >= 0; i--)
    {
        if (s[i] == '5')
        {
            for (int j = i - 1; j >= 0; j--)
            {
                if (s[j] == '2' || s[j] == '7')
                    minn = min(minn, n - j - 2);
            }
        }
        if (s[i] == '0')
        {
            for (int j = i - 1; j >= 0; j--)
            {
                if (s[j] == '0' || s[j] == '5')
                    minn = min(minn, n - j - 2);
            }
        }
    }
    cout << minn << endl;
}

int main()
{
    FAST1;
    FAST2;
    ll t = 1;
    cin >> t;
    while (t--)
    {
        fast_solve();
    }
}