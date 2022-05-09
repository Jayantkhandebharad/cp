#include <bits/stdc++.h>
using namespace std;

vector<string> ans;
void dfs(int i, int j, vector<vector<int>> &visited, string str, vector<vector<int>> &m, int n)
{
    if (i < 0 || j < 0 || i >= n || j >= n || m[i][j] == 0 || visited[i][j] == 1)
        return;
    if (i == n - 1 && j == n - 1)
    {
        ans.push_back(str);

        return;
    }
    visited[i][j] = 1;
    dfs(i - 1, j, visited, str + "U", m, n);
    dfs(i + 1, j, visited, str + "D", m, n);
    dfs(i, j + 1, visited, str + "R", m, n);
    dfs(i, j - 1, visited, str + "L", m, n);
    visited[i][j] = 0;
}
vector<string> findPath(vector<vector<int>> &m, int n)
{
    // Your code goes here
    vector<vector<int>> visited(n, vector<int>(n));
    if (m[0][0] == 0)
        return ans;
    if (m[n - 1][n - 1] == 0)
        return ans;
    string str = "";
    dfs(0, 0, visited, str, m, n);
    sort(ans.begin(), ans.end());
    return ans;
}