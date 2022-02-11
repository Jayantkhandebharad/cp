/*
542. 01 Matrix
Medium

4070

198

Add to List

Share
Given an m x n binary matrix mat, return the distance of the nearest 0 for each cell.

The distance between two adjacent cells is 1.
*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // time complexity : O(m*n)
    //space complexity : O(m*n)
    void bfs(vector<vector<int>> &grid, vector<vector<int>> &dis)
    {
        queue<pair<int, int>> q;
        for (int i = 0; i < grid.size(); i++)
        {
            for (int j = 0; j < grid[i].size(); j++)
            {
                if (grid[i][j] == 0)
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

                if (nx < 0 or nx >= grid.size() or ny < 0 or ny >= grid[nx].size() or grid[nx][ny] == 0 or dis[nx][ny] != -1)
                    continue;
                q.push({nx, ny});
                dis[nx][ny] = dis[x][y] + 1;
            }
        }
    }
    vector<vector<int>> updateMatrix(vector<vector<int>> &grid)
    {
        vector<vector<int>> dis(grid.size(), vector<int>(grid[0].size(), -1));
        bfs(grid, dis);
        return dis;
    }
};

// class Solution {
// public:
//     vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
//         int n= mat.size();
//         int m = mat[0].size();

//         vector<vector<int>> dp(n,vector<int> (m,INT_MAX-1));
//         for(int i=0;i<n;i++){
//             for(int j = 0;j<m;j++){
//                 if(!mat[i][j]){
//                     dp[i][j]=0;
//                     continue;
//                 }
//                 if(i>0 and mat[i][j]!=0){
//                     dp[i][j]=min(dp[i][j],dp[i-1][j]+1);
//                 }
//                 if(j>0 and mat[i][j]!=0){
//                     dp[i][j]=min(dp[i][j],dp[i][j-1]+1);
//                 }
//             }
//         }
//         for(int i=n-1;i>=0;i--){
//             for(int j=m-1;j>=0;j--){
//                 if(!mat[i][j]){
//                     dp[i][j]=0;
//                     continue;
//                 }
//                 if(i<n-1){
//                     dp[i][j]=min(dp[i][j],dp[i+1][j]+1);
//                 }
//                 if(j<m-1){
//                     dp[i][j]=min(dp[i][j],dp[i][j+1]+1);
//                 }
//             }
//         }
//         return dp;
//     }
// };