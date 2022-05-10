#include<bits/stdc++.h>
using namespace std;

    map<int,int> graph;
    map<int,int> visited;
int dfs(int start,int ter,int depth){
    if(visited[start]==1){
        return -1;
    }
    if(start==ter){
        return depth;
    }
    visited[start] = 1;
    //cout<<start<<" ";
    return dfs(graph[start],ter,depth+1);
}
int main(){
    int n,x,y;
    int depth=0;
    cin>>n>>x>>y;
  
    for(int i=1;i<n+1;i++){
        cin>>graph[i];
    }
    cout<<dfs(x,y,depth);
    return 0;
}