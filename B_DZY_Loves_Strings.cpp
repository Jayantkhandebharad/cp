#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    string str;
    cin >> str;
    long long k;
    cin >> k;
    unordered_map<char, int> map;
    vector<int> v(26);
    int mx = 0;
    string a = "abcdefghijklmnopqrstuvwxyz";
    for (int i = 0; i < 26; i++)
    {
        cin >> v[i];
        map[a[i]] = v[i];
        mx = max(mx, v[i]);
    }
    n = 0;
    for (int i = 0; i < str.size(); i++)
    {
        n += map[str[i]] * (i + 1);
    }
    for (int i = str.size() + 1; i < str.size() + k + 1; i++)
    {
        n += mx * i;
    }
    cout << n << endl;
}