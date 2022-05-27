#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumJumps(vector<int>& forbidden, int a, int b, int x) {
        if(x==0) return 0;
        vector<int> dp(6001,0);
        
        for(auto i:forbidden){
            dp[i]=-1;
        }
        queue<pair<int,bool>> q;
        q.push({0,false});
        while(!q.empty()){
            auto [val,backmove] = q.front();
            q.pop();
            if(val==x) return dp[val];
            
            if(backmove && val-b>0 and dp[val-b]==0){
                q.push({val-b,false});
                dp[val-b] = dp[val]+1;
            }
            if(val+a<6000 and dp[val+a]==0 ){
                q.push({val+a,true});
                dp[val+a] = dp[val]+1;
            }
        }
        return -1;
    }
};