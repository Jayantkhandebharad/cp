#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool cycle(int node, vector<int> adj[], vector<int> &vis, int parent)
    {
        vis[node] = 1;

        for (auto i : adj[node])
        {
            if (!vis[i])
            {
                if (cycle(i, adj, vis, node))
                {
                    return true;
                }
            }
            else if (i != parent)
            {
                return true;
            }
        }

        return false;
    }
    // Function to detect cycle in an undirected graph.
    bool isCycle(int V, vector<int> adj[])
    {
        // Code here
        vector<int> vis(V, 0), dfsvis(V, 0);
        for (int i = 0; i < V; i++)
        {
            if (!vis[i])
            {
                if (cycle(i, adj, vis, -1))
                {
                    return true;
                }
            }
        }
        return false;
    }
};