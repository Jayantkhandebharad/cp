#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int shortestPathBinaryMatrix(vector<vector<int>> &grid)
    {

        int n = grid.size();
        queue<pair<int, int>> q;
        if (grid[0][0] == 1 || grid[n - 1][n - 1] == 1)
        {
            return -1;
        }
        q.push({0, 0});
        grid[0][0] = 1;
        while (!q.empty())
        {

            int a = q.front().first;
            int b = q.front().second;
            q.pop();
            //cout<<a<<" "<<b<<' '<<grid[a][b]<<endl;
            if (a == n - 1 && b == n - 1)
            {
                break;
            }

            if (a - 1 >= 0 && b - 1 >= 0 && grid[a - 1][b - 1] == 0)
            {
                grid[a - 1][b - 1] = grid[a][b] + 1;
                q.push({a - 1, b - 1});
            }

            if (a >= 0 && b - 1 >= 0 && grid[a][b - 1] == 0)
            {
                grid[a][b - 1] = grid[a][b] + 1;
                q.push({a, b - 1});
            }

            if (a - 1 >= 0 && b >= 0 && grid[a - 1][b] == 0)
            {
                grid[a - 1][b] = grid[a][b] + 1;
                q.push({a - 1, b});
            }

            if (a + 1 < n && b - 1 >= 0 && grid[a + 1][b - 1] == 0)
            {
                grid[a + 1][b - 1] = grid[a][b] + 1;
                q.push({a + 1, b - 1});
            }
            if (a - 1 >= 0 && b + 1 < n && grid[a - 1][b + 1] == 0)
            {
                grid[a - 1][b + 1] = grid[a][b] + 1;
                q.push({a - 1, b + 1});
            }
            // cout<<"hi"<<endl;
            if (a >= 0 && b + 1 < n && grid[a][b + 1] == 0)
            {
                grid[a][b + 1] = grid[a][b] + 1;
                q.push({a, b + 1});
            }

            if (a + 1 < n && b >= 0 && grid[a + 1][b] == 0)
            {
                grid[a + 1][b] = grid[a][b] + 1;
                q.push({a + 1, b});
            }
            if (a + 1 < n && b + 1 < n && grid[a + 1][b + 1] == 0)
            {
                grid[a + 1][b + 1] = grid[a][b] + 1;
                q.push({a + 1, b + 1});
            }
        }

        if (grid[n - 1][n - 1] > 0)
        {
            return grid[n - 1][n - 1];
        }
        return -1;
    }
};