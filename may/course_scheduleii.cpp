//https://leetcode.com/problems/course-schedule-ii/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool cyclic(vector<vector<int>> adj,int n)
{
    queue<int>q;
    vector<int>vec(n,0);
    for(int i=0;i<n;i++)
    {
        for(auto j:adj[i])
        {
            vec[j]++;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(vec[i]==0)
        {
            q.push(i);
        }
    }
    int count=0;
    while(!q.empty())
    {
        int val=q.front();
        q.pop();
        count++;
        for(auto j:adj[val])
        {
            vec[j]--;
            if(vec[j]==0)
            {
                q.push(j);
            }
        }
    }
    if(count==n)
    {
        return false;
    }
  return true;
}
    void f(vector<vector<int>> &grid,stack<int> &st,int node,vector<int> &visited){
        //cout<<node<<" ";
        visited[node]=1;
        for(auto i:grid[node]){ 
            if(visited[i]==0){
                f(grid,st,i,visited);
            }
        }
        
        st.push(node);
        return;
    }
    vector<int> findOrder(int numc, vector<vector<int>>& pq) {
        vector<vector<int>> grid(numc+1,vector<int> ());
        for(int i=0;i<pq.size();i++){
            grid[pq[i][1]].push_back(pq[i][0]);
        }
        if(pq.size()==0){
            vector<int> aa;
            for(int i=0;i<numc;i++){
                aa.push_back(i);
            }
            return aa;
        }
        stack<int> st;
        vector<int> visited(numc+1,0);
        for(int i=0;i<numc;i++){
            if(visited[i]==0){
                f(grid,st,i,visited);
                
            }
            
        }
        if(cyclic(grid,numc)){
            return {};
        }
        vector<int> v;
        while(!st.empty()){
            v.push_back(st.top());
            st.pop();
        }
        return v;
    }
};