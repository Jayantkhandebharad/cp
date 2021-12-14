#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int max1;
    int flood(vector<vector<int>> &a, int r, int c)
    {
        int count = 1;
        a[r][c] = 2;
        if (r > 0 and a[r - 1][c] == 1)
        {
            count += flood(a, r - 1, c);
        }
        if (c > 0 and a[r][c - 1] == 1)
        {
            count += flood(a, r, c - 1);
        }
        if (c < a[0].size() - 1 and a[r][c + 1] == 1)
        {
            count += flood(a, r, c + 1);
        }
        if (r < a.size() - 1 and a[r + 1][c] == 1)
        {
            count += flood(a, r + 1, c);
        }
        return count;
    }
    int maxAreaOfIsland(vector<vector<int>> &grid)
    {
        int count1 = 0;
        max1 = 0;
        for (int i = 0; i < grid.size(); i++)
        {
            for (int j = 0; j < grid[0].size(); j++)
            {
                if (grid[i][j] == 1)
                {
                    count1 = flood(grid, i, j);
                    if (count1 > max1)
                    {
                        max1 = count1;
                    }
                }
            }
        }
        return max1;
    }
};