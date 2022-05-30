//https://www.codingninjas.com/codestudio/problems/number-of-subsets_3952532
#include <bits/stdc++.h>
using namespace std;

int f(int i,int tar,vector<int> &nums,vector<vector<int>> &dp){
    if(tar==0){
        return 1;
    }
    if(i==0){
        return nums[i]==tar;
    }
    
    if(dp[i][tar]!=-1){
        return dp[i][tar];
    }
    int take = 0;
    int not_take = f(i-1,tar,nums,dp);
    if(nums[i]<=tar){
        take = f(i-1,tar-nums[i],nums,dp);
    }
    return dp[i][tar] = take+not_take;
}

int findWays(vector<int> &num, int tar)
{
    vector<vector<int>> dp(num.size()+1,vector<int> (tar+1,-1));
    return f(num.size()-1,tar,num,dp);
}