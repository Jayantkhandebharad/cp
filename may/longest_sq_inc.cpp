#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int f(vector<vector<int>>& matrix,vector<vector<int>>& dp,int x,int y){
        if(x<0 or y<0 or x>=matrix.size() or y>=matrix[0].size()){
            return 0;
        }
        if(dp[x][y]!=-1){
            return dp[x][y];
        }
        dp[x][y]=0;
        if(x<matrix.size()-1 and matrix[x+1][y]>matrix[x][y]){
            dp[x][y]=max(dp[x][y],f(matrix,dp,x+1,y));
        }
        if(y<matrix[0].size()-1 and matrix[x][y+1]>matrix[x][y]){
            dp[x][y]=max(dp[x][y],f(matrix,dp,x,y+1));
        }
        if(x>0 and matrix[x-1][y]>matrix[x][y]){
            dp[x][y]=max(dp[x][y],f(matrix,dp,x-1,y));
        }
        if(y>0 and matrix[x][y-1]>matrix[x][y]){
            dp[x][y]=max(dp[x][y],f(matrix,dp,x,y-1));
        }
        //cout<<matrix[x][y]<<" ";
        return dp[x][y]=dp[x][y]+1;
    }
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        vector<vector<int>> dp(matrix.size()+1,vector<int> (matrix[0].size()+1,-1));
        int ans = 1;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                
                    ans = max(ans,f(matrix,dp,i,j));
            }
        }
        return max(ans,1);
    }
};