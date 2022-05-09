#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long x, y, k, a;
    cin >> x >> y >> k;
    vector<long long> x1, x2, y1, y2;
    for (int i = 0; i < k; i++)
    {
        cin >> a;
        x1.push_back(a);
    }
    cin >> k;
    for (int i = 0; i < k; i++)
    {
        cin >> a;
        x2.push_back(a);
    }
    cin >> k;
    for (int i = 0; i < k; i++)
    {
        cin >> a;
        y1.push_back(a);
    }
    cin >> k;
    for (int i = 0; i < k; i++)
    {
        cin >> a;
        y2.push_back(a);
    }
    long long aa = max(x1[x1.size() - 1] - x1[0], x2[x2.size() - 1] - x2[0]);
    aa = max(y1[y1.size() - 1] - y1[0], aa);
    aa = max(aa, y2[y2.size() - 1] - y2[0]);

    vector<long long> ay;

    ay.push_back((x1[x1.size() - 1] - x1[0]) * y);
    ay.push_back((x2[x2.size() - 1] - x2[0]) * y);
    ay.push_back((y1[y1.size() - 1] - y1[0]) * x);
    ay.push_back((y2[y2.size() - 1] - y2[0]) * x);
    // int ah = max(abs(ay[0] * y), abs(ay[1] * y));
    // ah = max(ah, abs(ay[2] * x));
    // ah = max(ah, abs(ay[3] * x));
    // cout << ah << endl;
    sort(ay.begin(), ay.end(), greater<long long>());
    cout << ay[0] << endl;
    return;
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        solve();
    }
    return 0;
}