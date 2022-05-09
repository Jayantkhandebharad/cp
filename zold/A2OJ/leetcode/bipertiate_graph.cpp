#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isBipartite(vector<vector<int>> &graph)
    {
        vector<int> color(graph.size(), -1);
        int n = graph.size();
        for (int i = 0; i < n; i++)
        {
            if (color[i] == -1)
            {
                if (!bipertiate(i, graph, color))
                {
                    return false;
                }
            }
        }
        return true;
    }
    bool bipertiate(int node, vector<vector<int>> graph, vector<int> &color)
    {
        if (color[node] == -1)
        {
            color[node] = 1;
        }
        for (auto i : graph[node])
        {
            if (color[i] == -1)
            {
                color[i] = 1 - color[node];
                if (!bipertiate(i, graph, color))
                {
                    return false;
                }
            }
            else if (color[i] == color[node])
            {
                return false;
            }
        }
        return true;
    }
};