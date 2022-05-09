#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    //Function to find sum of weights of edges of the Minimum Spanning Tree.
    int spanningTree(int V, vector<vector<int>> adj[])
    {
        // code here
        vector<int> key(V, INT_MAX), parent(V, -1);
        vector<bool> mst(V, false);
        key[0] = 0;

        int ans = 0;
        for (int i = 0; i < V; i++)
        {
            int mini = INT_MAX, u;
            for (int j = 0; j < V; j++)
            {
                if (mst[j] == false and key[j] < mini)
                {
                    mini = key[j];
                    u = j;
                }
            }
            mst[u] = true;
            ans += key[u];
            for (auto j : adj[u])
            {
                int v = j[0];
                int weight = j[1];
                if (!mst[v] and weight < key[v])
                {
                    parent[v] = u;
                    key[v] = weight;
                }
            }
        }
        return ans;
    }
};
