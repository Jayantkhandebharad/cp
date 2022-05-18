#include<bits/stdc++.h>
using namespace std;

void bfs(vector<vector<int>> &a){
    vector<int> visited(a.size()+1,0);
    queue<int> q;
    for(int i=1;i<a.size();i++){
        if(!visited[i]){
            q.push(i);
            visited[i]=1;
            cout<<i<<" ";
            while(!q.empty()){
                int t = q.front();
                q.pop();
                for(auto i:a[t]){
                    if(!visited[i]){
                        cout<<i<<" ";
                        q.push(i);
                        visited[i]=1;
                    }
                }
            }
        }
    }
    cout<<endl;
    return;
}

void dfs(vector<vector<int>> &a,int node,vector<int> &visited){
    for(int i:a[node]){
        if(!visited[i]){
            visited[i]=1;
            cout<<i<<" ";
            dfs(a,i,visited);
        }
    }
    
    return;
}



int main(){
    int n;
    cout<<"Number of nodes : "<<endl;
    cin>>n;
    int e;
    cout<<"Number of edges : "<<endl;
    cin>>e;
    vector<vector<int>> v(n+1,vector<int>());
    for(int i=0;i<e;i++){
        int a,b;
        cout<<"Enter source and destination : "<<endl;
        cin>>a>>b;
        v[a].push_back(b);
    }
    vector<int> visited(n+1,0);
    int op;
    while(1){
        cout<<"1 .DFS\n2. BFS\n3 .exit : "<<endl;
        cin>>op;
        if(op==1){
            for(int i=1;i<n;i++){
                if(!visited[i]){
                    cout<<i<<" ";
                    visited[i]=1;
                    dfs(v,i,visited);
                }
            }
            cout<<endl;
        }
        else if(op==2){
            bfs(v);
        }
        else if(op==3){
            break;
        }
        else{
            cout<<"enter valid kay "<<endl;
        }
    }
    return 0;
}