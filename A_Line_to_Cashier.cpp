#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    vector<int> k;
    cin >> n;
    int a;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        k.push_back(a);
    }
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < k[i]; j++)
        {
            cin >> a;
            cnt = a * 5 + cnt;
            cnt = 15 + cnt;
        }
        k[i] = cnt;
        cnt = 0;
    }
    sort(k.begin(), k.end());
    cout << k[0];
    return 0;
}