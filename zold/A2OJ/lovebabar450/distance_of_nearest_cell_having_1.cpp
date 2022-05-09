#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool valid(int i, int j, vector<vector<int>> &grid)
    {
        if (i >= 0 and j >= 0 and i < grid.size() and j < grid[0].size())
        {
            return true;
        }
        return false;
    }
    //Function to find distance of nearest 1 in the grid for each cell.
    vector<vector<int>> nearest(vector<vector<int>> grid)
    {
        queue<pair<int, int>> q;
        int m = grid[0].size();
        int n = grid.size();
        vector<vector<int>> a(n, (vector<int>(m, INT_MAX)));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (grid[i][j] == 1)
                {
                    q.push({i, j});
                    a[i][j] = 0;
                }
            }
        }

        while (!q.empty())
        {
            int x = q.front().first;
            int y = q.front().second;
            q.pop();
            if (valid(x + 1, y, grid) and a[x][y] + 1 < a[x + 1][y])
            {
                a[x + 1][y] = min(a[x][y] + 1, a[x + 1][y]);
                q.push({x + 1, y});
            }
            if (valid(x - 1, y, grid) and a[x][y] + 1 < a[x - 1][y])
            {
                a[x - 1][y] = min(a[x][y] + 1, a[x - 1][y]);
                q.push({x - 1, y});
            }
            if (valid(x, y + 1, grid) and a[x][y] + 1 < a[x][y + 1])
            {
                a[x][y + 1] = min(a[x][y] + 1, a[x][y + 1]);
                q.push({x, y + 1});
            }
            if (valid(x, y - 1, grid) and a[x][y] + 1 < a[x][y - 1])
            {
                a[x][y - 1] = min(a[x][y] + 1, a[x][y - 1]);
                q.push({x, y - 1});
            }
        }
        return a;
    }
};