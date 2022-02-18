#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int makeConnected(int n, vector<vector<int>> &connections)
    {
        if (connections.size() < n - 1)
        {
            return -1;
        }
        vector<int> adj[n + 1];

        vector<int> vis(n, 0);
        for (int i = 0; i < connections.size(); i++)
        {
            adj[connections[i][0]].push_back(connections[i][1]);
            adj[connections[i][1]].push_back(connections[i][0]);
        }

        int x = -1;
        for (int i = 0; i < n; i++)
        {
            if (!vis[i])
            {
                x++;
                bfs(i, adj, vis);
            }
        }
        return x;
    }

    void bfs(int node, vector<int> adj[], vector<int> &vis)
    {
        vis[node] = 1;
        queue<int> q;
        q.push(node);
        while (!q.empty())
        {
            int x = q.front();
            q.pop();
            for (auto i : adj[x])
            {
                if (!vis[i])
                {
                    q.push(i);
                    vis[i] = 1;
                }
            }
        }
        return;
    }
};
