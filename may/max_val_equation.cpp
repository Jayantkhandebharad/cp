#include<bits/stdc++.h>
using namespace std;

void solve(){
    
}


int main(){
    solve();
}			
class Solution {
public:
    int findMaxValueOfEquation(vector<vector<int>>& points, int k) {
        priority_queue<pair<int,int>> pq;
        //yi+yj +xj-xi
        //yi-xi  +  yj+xj
        //A      +   B
        //so we will push yi-xi with xi to check with xj in queue and check
        pq.push({points[0][1]-points[0][0],points[0][0]});
        int ans = -1e9;
        int n = points.size();
        for(int i=1;i<n;i++){
            while(pq.size() and points[i][0]-pq.top().second>k){
                pq.pop();
            }
            if(pq.size()){
                ans = max(ans,pq.top().first + points[i][0]+points[i][1]);
            }
            pq.push({points[i][1]-points[i][0],points[i][0]});
        }
        return ans;
    }
};