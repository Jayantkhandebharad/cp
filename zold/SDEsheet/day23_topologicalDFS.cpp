/*
Topological sort 

Given a Directed Acyclic Graph (DAG) with V vertices and E edges, Find any Topological Sorting of that Graph.
*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void f(stack<int> &st, vector<int> &vis, int node, vector<int> adj[])
    {
        vis[node] = 1;
        for (auto it : adj[node])
        {
            if (!vis[it])
            {
                f(st, vis, it, adj);
            }
        }
        st.push(node);
        return;
    }
    //Function to return list containing vertices in Topological order.
    vector<int> topoSort(int V, vector<int> adj[])
    {
        // code here
        stack<int> st;
        vector<int> vis(V);
        for (int i = 0; i < V; i++)
        {
            if (!vis[i])
            {
                f(st, vis, i, adj);
            }
        }
        vector<int> ans;
        while (!st.empty())
        {
            ans.push_back(st.top());
            st.pop();
        }
        return ans;
    }
};