#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<vector<pair<int,int>>> a(n+1);
        for(int i=0;i<times.size();i++){
            a[times[i][0]].push_back({times[i][1],times[i][2]});
        }
        vector<int> visited(n+1,INT_MAX);
        queue<int> q;
        int l=0;
        q.push(k);
        visited[k]=0;
        while(!q.empty()){
            int x = q.front();
            q.pop();
            //int ll=0;
            for(auto i:a[x]){
                if(visited[x]+i.second<visited[i.first]){
                    //cout<<i.first<<" ";
                    visited[i.first]=visited[x]+i.second;
                    //ll=max(i.second,ll);
                    q.push(i.first);
                }
            }
            //l+=ll;
        }
        bool flag = true;
        
        for(int i=1;i<n+1;i++){
            l = max(l,visited[i]);
            if(visited[i]==INT_MAX){
                //cout<<i<<" ";
                return -1;
            }
        }
        return l;
    }
};