#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
int findWays(vector<int> &num, int tar){
     int n = num.size();

    vector<vector<int>> dp(n,vector<int>(tar+1,0));
    
    if(num[0] == 0) dp[0][0] =2;  // 2 cases -pick and not pick
    else dp[0][0] = 1;  // 1 case - not pick
    
    if(num[0]!=0 && num[0]<=tar) dp[0][num[0]] = 1;  // 1 case -pick
    
    for(int ind = 1; ind<n; ind++){
        for(int target= 0; target<=tar; target++){
            
            int notTaken = dp[ind-1][target];
    
            int taken = 0;
                if(num[ind]<=target)
                    taken = dp[ind-1][target-num[ind]];
        
            dp[ind][target]= (notTaken + taken);
        }
    }
    return dp[n-1][tar];
}


int findTargetSumWays(vector<int>& nums, int d) {
        int totSum = 0;
        int n = nums.size();
    for(int i=0; i<n;i++){
        totSum += nums[i];
    }
    
    //Checking for edge cases
    if(totSum-d <0 || (totSum-d)%2 ) return 0;
    
    return findWays(nums,(totSum-d)/2);
        
    }
};