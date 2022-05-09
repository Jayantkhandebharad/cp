#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long i, j, k, l, p, q, n;
    cin >> n;
    string s;
    cin >> s;
    if (n % 2 == 1)
    {
        cout << "NO\n";
        return;
    }
    map<char, int> m;
    vector<pair<int, char>> v;
    for (i = 0; i < n; i++)
        m[s[i]]++;
    for (auto x : m)
    {
        v.push_back(make_pair(x.second, x.first));
    }

    sort(v.begin(), v.end());
    string r = "";
    for (i = 0; i < v.size(); i++)
    {
        p = v[i].first;
        if (p > (n / 2))
        {
            cout << "NO\n";
            return;
        }

        for (j = 0; j < p; j++)
        {
            r += v[i].second;
        }
    }
    j = n / 2;
    i = 0;
    j--;
    char c;
    while (i < j)
    {
        c = r[i];
        r[i] = r[j];
        r[j] = c;
        i++;
        j--;
    }
    cout << "YES\n"
         << r << "\n";
}

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// int countFrequency(string str, char ch)
// {
//     int count = 0;

//     for (int i = 0; i < str.length(); i++)
//         if (str[i] == ch)
//             ++count;

//     return count;
// }

// void sortArr(string str)
// {
//     int n = str.length();
//     vector<pair<int, char>> vp;
//     for (int i = 0; i < n; i++)
//     {

//         vp.push_back(make_pair(countFrequency(str, str[i]), str[i]));
//     }
//     sort(vp.begin(), vp.end());

//     for (int i = 0; i < vp.size() / 2; i++)
//     {
//         cout << vp[i].second;
//     }
//     for (int i = (vp.size()); i >= vp.size() / 2; i--)
//     {
//         cout << vp[i].second;
//     }
//     cout << endl;
// }

// bool findMajority(string arr, int size)
// {
//     unordered_map<char, int> m;
//     for (int i = 0; i < size; i++)
//         m[arr[i]]++;
//     int count = 0;
//     for (auto i : m)
//     {
//         if (i.second > size / 2)
//         {
//             count = 1;
//             return false;
//         }
//     }
//     if (count == 1)
//         return false;
//     return true;
// }

// int main()
// {
//     int t;
//     cin >> t;
//     int n;
//     string s;
//     for (int i = 0; i < t; i++)
//     {
//         cin >> n >> s;
//         if (n % 2 == 1)
//         {
//             cout << "NO" << endl;
//         }
//         else
//         {
//             if (findMajority(s, n))
//             {
//                 cout << "YES" << endl;
//                 sortArr(s);

//                 // sort(s.begin(), s.end());
//                 // for (int i = (s.size()); i >= s.size() / 2; i--)
//                 // {
//                 //     cout << s[i];
//                 // }
//                 // for (int i = 0; i < s.size() / 2; i++)
//                 // {
//                 //     cout << s[i];
//                 // }

//                 cout << endl;
//             }
//             else
//             {
//                 cout << "NO" << endl;
//             }
//         }
//     }
//     return 0;
// }