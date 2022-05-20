//https://leetcode.com/problems/unique-paths-ii/submissions/
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool check(int x,int y,vector<vector<int>>& grid){
        if(x<0 or y<0 or x>=grid.size() or y>=grid[0].size() or grid[x][y]==1){
            return false;
        }
        return true;
    }
    int f(vector<vector<int>>& grid,vector<vector<int>>& dp,int x,int y){
        
        if(x==grid.size()-1 and y==grid[0].size()-1){
            return 1;
        }
        if(check(x,y,grid) and dp[x][y]!=-1){
            
            return dp[x][y];
        }
        int ans=0;
        if(check(x+1,y,grid)){
            ans +=f(grid,dp,x+1,y);
        }
        if(check(x,y+1,grid)){
            ans +=f(grid,dp,x,y+1);
        }
        return dp[x][y] = ans;
        
    }
    int uniquePathsWithObstacles(vector<vector<int>>& grid) {
        vector<vector<int>> dp(grid.size(),vector<int> (grid[0].size(),-1));
        if(grid[grid.size()-1][grid[0].size()-1] or grid[0][0]){
            return 0;
        }
        //dp[grid.size()-1][grid[0].size()-1]=1;
        return f(grid,dp,0,0);
        
    }
};