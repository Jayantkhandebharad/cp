#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int r, c;
    int d[4][2] = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};
    bool valid(int i, int j)
    {
        return (i >= 0 && i < r && j >= 0 && j < c);
    }
    void bfs(vector<vector<int>> &g, vector<vector<int>> &dp, int i, int j)
    {
        queue<pair<int, int>> q;
        q.push({i, j});

        while (!q.empty())
        {
            pair<int, int> p = q.front();
            q.pop();
            int x = p.first;
            int y = p.second;

            if (g[x][y] == 1)
                dp[x][y] = 0;

            for (int i = 0; i < 4; i++)
            {
                int cx = x + d[i][0];
                int cy = y + d[i][1];
                if (valid(cx, cy) && g[cx][cy] == 0 && dp[cx][cy] > dp[x][y] + 1)
                {
                    dp[cx][cy] = min(dp[cx][cy], 1 + dp[x][y]);
                    q.push({cx, cy});
                }
            }
        }
    }
    int maxDistance(vector<vector<int>> &g)
    {
        r = g.size();
        c = g[0].size();

        vector<vector<int>> dp(r, vector<int>(c, INT_MAX));
        int f = 0;
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (g[i][j] == 1)
                {
                    f = 1; // if no land is present.
                    bfs(g, dp, i, j);
                }
            }
        }

        if (f == 0)
            return -1;
        int ans = 0;
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (dp[i][j] > ans && dp[i][j] != INT_MAX)
                    ans = dp[i][j];
            }
        }
        if (ans == 0)
            return -1; // if no water is present.
        return ans;
    }
};