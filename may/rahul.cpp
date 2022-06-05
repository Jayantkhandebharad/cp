#include <bits/stdc++.h>
using namespace std;

 
class Solution {
  public:
    int f(int parent,int s,vector<int> &ans,vector<int> &king,vector<int> adj[]){
        if(king[parent]==king[s]){
            return 0;
        }
        int an=0;
        ans.push_back(s);
        for(auto i:adj[s]){
            an = max(an,1+f(s,i,ans,king,adj));
        }
        ans.pop_back();
        return an;
    }
    vector<int> dfsOfGraph(int V, vector<int> adj[],vector<int> &kings) {
        vector<int> ans;
        cout<<1+f(0,1,ans,kings,adj);
        return ans;
    }
};

int main() {
    
        int V, E;
        cin >> V >> E;

        vector<int> adj[V+1];
        vector<int> kings(V+1,0);
        for(int i=1;i<V+1;i++){
            cin>>kings[i];
        }
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }
        
        Solution obj;
        obj.dfsOfGraph(V, adj,kings);
    
    return 0;
} 