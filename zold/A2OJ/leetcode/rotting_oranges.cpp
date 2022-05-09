/*
994. Rotting Oranges
Medium

5850

260

Add to List

Share
You are given an m x n grid where each cell can have one of three values:

0 representing an empty cell,
1 representing a fresh orange, or
2 representing a rotten orange.
Every minute, any fresh orange that is 4-directionally adjacent to a rotten orange becomes rotten.

Return the minimum number of minutes that must elapse until no cell has a fresh orange. If this is impossible, return -1.
*/

#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    // time complexity : O(m*n)
    //space complexity : O(m*n)
    int bfs(vector<vector<int>> &grid, vector<vector<int>> &dis)
    {
        queue<pair<int, int>> q;
        int ans = 0;
        for (int i = 0; i < grid.size(); i++)
        {
            for (int j = 0; j < grid[i].size(); j++)
            {
                if (grid[i][j] == 2)
                {
                    q.push({i, j});
                    dis[i][j] = 0;
                }
            }
        }

        while (!q.empty())
        {

            auto point = q.front();
            q.pop();

            int x = point.first;
            int y = point.second;

            int dx[] = {1, -1, 0, 0};
            int dy[] = {0, 0, -1, 1};

            for (int i = 0; i < 4; i++)
            {
                int nx = x + dx[i];
                int ny = y + dy[i];

                if (nx < 0 or nx >= grid.size() or ny < 0 or ny >= grid[nx].size() or grid[nx][ny] == 2 or dis[nx][ny] != -1 or grid[nx][ny] == 0)
                    continue;
                q.push({nx, ny});
                dis[nx][ny] = dis[x][y] + 1;
                ans = max(dis[nx][ny], ans);
            }
        }

        for (int i = 0; i < grid.size(); i++)
        {
            for (int j = 0; j < grid[0].size(); j++)
            {
                if (grid[i][j] and dis[i][j] == -1)
                {
                    return -1;
                }
            }
        }
        return ans;
    }
    int orangesRotting(vector<vector<int>> &grid)
    {
        vector<vector<int>> dis(grid.size(), vector<int>(grid[0].size(), -1));
        int ans = bfs(grid, dis);
        return ans;
    }
};