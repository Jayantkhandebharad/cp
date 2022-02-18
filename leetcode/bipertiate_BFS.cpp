#include <bits/stdc++.h>
using namespace std;

bool bipertiateBFS(int node, vector<vector<int>> &graph, vector<int> color)
{
    queue<int> q;
    q.push(node);
    color[node] = 1;

    while (!q.empty())
    {
        int node1 = q.front();
        q.pop();
        for (int i : graph[node1])
        {
            if (color[i] == -1)
            {
                color[i] = 1 - color[node1];
                q.push(i);
            }
            else if (color[i] == color[node1])
            {
                return false;
            }
        }
    }
    return true;
}