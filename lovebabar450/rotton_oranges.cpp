#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    //Function to find minimum time required to rot all oranges.
    int orangesRotting(vector<vector<int>> &grid)
    {
        // Code here
        queue<pair<int, int>> q;
        int r = grid.size();
        int c = grid[0].size();
        int i, j;
        int count = 0;
        for (i = 0; i < r; i++)
        {
            for (j = 0; j < c; j++)
            {
                if (grid[i][j] == 2)
                    q.push({i, j});
            }
        }
        q.push({-1, -1});
        while (!q.empty())
        {
            i = q.front().first;
            j = q.front().second;
            if (i == -1 && j == -1 && q.size() == 1)
            {
                q.pop();
                break;
            }
            else if (i == -1 && j == -1 && q.size() > 1)
            {
                count++;
                q.pop();
                q.push({-1, -1});
            }

            else
            {
                if (i - 1 >= 0 && grid[i - 1][j] == 1)
                {
                    grid[i - 1][j] = 2;
                    q.push({i - 1, j});
                }
                if (i + 1 < r && grid[i + 1][j] == 1)
                {
                    grid[i + 1][j] = 2;
                    q.push({i + 1, j});
                }
                if (j - 1 >= 0 && grid[i][j - 1] == 1)
                {
                    grid[i][j - 1] = 2;
                    q.push({i, j - 1});
                }
                if (j + 1 < c && grid[i][j + 1] == 1)
                {
                    grid[i][j + 1] = 2;
                    q.push({i, j + 1});
                }
                q.pop();
            }
        }
        for (i = 0; i < r; i++)
        {
            for (j = 0; j < c; j++)
            {
                if (grid[i][j] == 1)
                    return -1;
            }
        }
        return count;
    }
};