#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x, y;
    cin >> n;
    unordered_map<int, int> row, col;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        row[x]++;
        col[y]++;
    }
    int a = row.size();
    int b = col.size();
    cout << min(a, b) << endl;
    return 0;
}