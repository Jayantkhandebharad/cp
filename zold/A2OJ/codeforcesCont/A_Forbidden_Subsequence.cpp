#include <bits/stdc++.h>
using namespace std;

#define sizaa(x) ((int)x.size())

const int MAX_N = 1e5 + 5;
const long long MOD = 1e9 + 7;

const long long INF = 1e9;
const long double EPS = 1e-9;

void solve()
{
    string str, t;
    cin >> str >> t;
    sort(str.begin(), str.end());

    if (t == "abc")
    {
        if (str[0] != 'a')
        {
            cout << str << "\n";
            return;
        }
        long long i = 0, j = 0;

        for (; i < sizaa(str) - 1; i++)
            if (str[i] == 'b')
                break;

        for (j = i; j < sizaa(str) - 1; j++)
            if (str[j] == 'c')
                break;

        while (j < sizaa(str) && str[j] == 'c')
        {
            swap(str[i], str[j]);
            i++;
            j++;
        }
    }
    cout << str << "\n";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        solve();
    }
}