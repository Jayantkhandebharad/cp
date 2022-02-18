#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Function to find the number of islands.
    void connect(vector<vector<char>> &grid, int x, int y)
    {

        if (x < 0 or x >= grid.size() or y < 0 or y >= grid[0].size() or grid[x][y] == '2' or grid[x][y] == '0')
        {
            return;
        }

        grid[x][y] = '0';
        //cout<<x<<y<<" ";

        connect(grid, x + 1, y);
        connect(grid, x - 1, y);
        connect(grid, x, y + 1);
        connect(grid, x, y - 1);
        connect(grid, x + 1, y + 1);
        connect(grid, x - 1, y - 1);
        connect(grid, x + 1, y - 1);
        connect(grid, x - 1, y + 1);
    }

    int numIslands(vector<vector<char>> &grid)
    {
        // Code here
        int x = 0;
        for (int i = 0; i < grid.size(); i++)
        {
            for (int j = 0; j < grid[0].size(); j++)
            {
                if (grid[i][j] == '1')
                {

                    connect(grid, i, j);
                    x++;
                }
            }
        }
        return x;
    }
};