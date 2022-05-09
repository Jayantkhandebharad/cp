#include <bits/stdc++.h>
using namespace std;
int solve(int n, int m, int i, int j, int a, int b)
{
    if (i == n and j == m)
    {
        return 0;
    }
    int rdef = abs(n - i);
    int cdef = abs(m - j);
    if (rdef % a == 0 and cdef % b == 0)
    {
        if ((rdef / a) % 2 == (cdef / b) % 2)
        {
            return max(rdef / a, cdef / b);
        }
    }
    return INT_MAX;
}

int main()
{
    int n, m, i, j, a, b, p, q, r, s = 0;
    cin >> n >> m >> i >> j >> a >> b;
    vector<int> x;
    int ans = INT_MAX;
    ans = min(ans, solve(n, m, i, j, a, b));
    ans = min(ans, solve(1, m, i, j, a, b));
    ans = min(ans, solve(n, 1, i, j, a, b));
    ans = min(ans, solve(1, 1, i, j, a, b));

    if (ans == INT_MAX or ((i + a > n and i - a < 1) or (j + b > m and j - b < 1)) and ans != 0)
        cout << "Poor Inna and pony!\n";
    else
        cout << ans << '\n';
    return 0;
}