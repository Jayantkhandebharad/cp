#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    static int findpar(vector<int> &parent, int node)
    {
        if (parent[node] == node)
        {
            return node;
        }
        return parent[node] = findpar(parent, parent[node]);
    }

    static bool unionn(vector<int> &parent, vector<int> &rank, int u, int v)
    {
        u = findpar(parent, u);
        v = findpar(parent, v);

        if (u == v)
        {
            return false;
        }

        if (rank[u] > rank[v])
        {
            parent[v] = u;
        }
        else if (rank[u] < rank[v])
        {
            parent[u] = v;
        }
        else if (rank[u] == rank[v])
        {
            parent[v] = u;
            rank[u]++;
        }
        return true;
    }
    int removeStones(vector<vector<int>> &stones)
    {
        int N = stones.size();

        // parent
        vector<int> parent(N + 1);
        for (int i = 0; i <= N; i++)
        {
            parent[i] = i;
        }

        // rank
        vector<int> rank(N + 1, 0);
        int components = 0;
        for (int i = 0; i < N; i++)
        {
            for (int j = i + 1; j < N; j++)
            {
                if ((stones[i][0] == stones[j][0] or stones[i][1] == stones[j][1]) and unionn(parent, rank, i, j))
                {
                    components++;
                }
            }
        }
        return components;
    }
};