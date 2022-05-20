//number-of-provinces
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void bfs(vector<vector<int>> adj,vector<int> &vis,int node){
        vis[node]=1;
        queue<int> q;
        q.push(node);
        while(!q.empty()){
            int a = q.front();
            q.pop();
            for(auto i:adj[a]){
                if(!vis[i]){
                    q.push(i);
                    vis[i]=1;
                }
                cout<<i<<" ";
            }
        }
        return;
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        vector<vector<int>> adj(isConnected.size()+1,vector<int>());
        int x=0;
        for(auto i:isConnected){
            for(int j=0;j<i.size();j++){
                if(i[j]>0){
                    adj[x].push_back(j);
                    adj[j].push_back(x);
                }
            }
            x++;
        }
        int ans=0;
        vector<int> vis(isConnected.size()+1,0);
        for(int i=0;i<isConnected.size();i++){
            if(!vis[i]){
                ans++;
                bfs(adj,vis,i);
                vis[i]=1;
            }
        }
        return ans;
    }
};