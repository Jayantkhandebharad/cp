/*
DFS of Graph 

Given a connected undirected graph. Perform a Depth First Traversal of the graph.
Note: Use recursive approach to find the DFS traversal of the graph starting from the 0th vertex from left to right according to the graph.
*/

#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void dfs(int node, vector<int> &visited, vector<int> adj[], vector<int> &ans)
    {
        ans.push_back(node);
        visited[node] = 1;
        for (auto s : adj[node])
        {
            if (!visited[s])
            {
                dfs(s, visited, adj, ans);
            }
        }
    }
    // Function to return a list containing the DFS traversal of the graph.
    vector<int> dfsOfGraph(int V, vector<int> adj[])
    {
        // Code here
        vector<int> ans;
        vector<int> visited(V, 0);

        for (int i = 0; i < V; i++)
        {
            if (!visited[i])
            {

                dfs(i, visited, adj, ans);
            }
        }
        return ans;
    }
};