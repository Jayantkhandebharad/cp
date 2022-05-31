//knapsack01

#include<bits/stdc++.h>
using namespace std;

int knapsack(vector<int> w, vector<int> val, int n, int bgw) 
{
	vector<int> prev(bgw+1);
    for(int i=w[0];i<=bgw;i++){
        prev[i]=val[0];
    }
    
    for(int i=1;i<n;i++){
        vector<int> cur(bgw+1);
        for(int j = 0;j<=bgw;j++){
            int no_take = prev[j];
            int take=-1e8;
            if(w[i]<=j){
                take = val[i]+prev[j-w[i]];
            }
            cur[j]=max(take,no_take);
        }
        prev = cur;
    }
    return prev[bgw];
}