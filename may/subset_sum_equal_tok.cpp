#include<bits/stdc++.h>
using namespace std;


int f(int ind,int target,vector<int> &a,vector<vector<int>> &dp){
    if(target==0) return true;
    if(ind==0) return(a[0]==target);
    
    if(dp[ind][target]!=-1) return dp[ind][target];
    
    bool take = false;
    bool not_take = f(ind-1,target,a,dp);
    if(target>= a[ind]){
        take = f(ind-1,target-a[ind],a,dp);
    }
    return dp[ind][target]=((take)||(not_take));
}

bool subsetSumToK(int n, int k, vector<int> &arr) {
    //dds
//     vector<vector<int>> dp(n+1,vector<int>(k+1,-1));
//     return f(n-1,k,arr,dp);
    vector<vector<bool>> dp(n,vector<bool>(k+1,0));
    for(int i=0;i<n;i++){
        dp[i][0]=true;
    }
    dp[0][arr[0]]=true;
    for(int i=1;i<n;i++){
        for(int j=1;j<=k;j++){
            bool not_take = dp[i-1][j];
            bool take = false;
            if(arr[i]<=j) {
                take = dp[i-1][j-arr[i]];
            }
            dp[i][j] = take|not_take;
        }
    }
    return dp[n-1][k];
}