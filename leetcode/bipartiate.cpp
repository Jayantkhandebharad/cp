#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool bipartDfs(int n, vector<int> adj[], vector<int> &vis, int node)
    //returns false if we can't divide for a component and return true otherwise
    {
        for (auto it : adj[node])
        {
            if (vis[it] == -1)
            {
                vis[it] = 1 - vis[node];

                if (!(bipartDfs(n, adj, vis, it)))
                    return false;
            }

            else if (vis[it] == vis[node])
                return false;
        }
        return true;
    }

    bool dfscheck(int n, vector<int> adj[], vector<int> &vis) //checks for each component of graph
    {
        for (int i = 1; i < n + 1; i++)
        {
            if (vis[i] == -1)
                vis[i] = 1;
            if (!(bipartDfs(n, adj, vis, i)))
                return false;
        }

        return true;
    }

    //even if one component can't be divided then whole graph fails

    bool possibleBipartition(int n, vector<vector<int>> &dis)
    {
        vector<int> adj[n + 1];
        vector<int> vis(n + 1, -1);
        for (int i = 0; i < dis.size(); i++)
        {
            adj[dis[i][0]].push_back(dis[i][1]);
            adj[dis[i][1]].push_back(dis[i][0]);
        }

        return dfscheck(n, adj, vis);
    }
};