#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void dfs(vector<vector<int>> &grid, vector<vector<int>> &vis, int x, int y)
    {
        if (x < 0 or y < 0 or x >= grid.size() or y >= grid[0].size())
        {
            return;
        }
        if (vis[x][y])
        {
            return;
        }
        vis[x][y] = 2;

        dfs(grid, vis, x - 1, y);
        dfs(grid, vis, x, y - 1);
        dfs(grid, vis, x + 1, y);
        dfs(grid, vis, x, y + 1);

        return;
    }
    int closedIsland(vector<vector<int>> &grid)
    {
        vector<vector<int>> vis = grid;
        int n = 0;
        for (int i = 0; i < grid.size(); i++)
        {
            for (int j = 0; j < grid[0].size(); j++)
            {
                if ((i == 0 || i == grid.size() - 1 || j == 0 || j == grid[0].size() - 1) && grid[i][j] == 0)
                {
                    dfs(grid, vis, i, j);
                }
            }
        }
        for (int i = 0; i < grid.size(); i++)
        {
            for (int j = 0; j < grid[0].size(); j++)
            {
                if (vis[i][j] == 0)
                {
                    dfs(grid, vis, i, j);
                    n++;
                }
            }
        }
        return n;
    }
};