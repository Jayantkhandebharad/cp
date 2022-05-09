#include <bits/stdc++.h>
using namespace std;

void f(vector<vector<int>> &graph, vector<int> &visited, int node, vector<int> &vect)
{
    visited[node] = 1;
    vect.push_back(node);
    for (auto i : graph[node])
    {
        if (!visited[i])
        {
            f(graph, visited, i, vect);
        }
    }
    return;
}

vector<vector<int>> depthFirstSearch(int V, int E, vector<vector<int>> &graph)
{
    // Write your code here
    vector<vector<int>> travers;
    vector<int> visited(V, 0);
    for (int i = 0; i < V; i++)
    {
        if (!visited[i])
        {
            vector<int> vect;

            f(graph, visited, i, vect);
            travers.push_back(vect);
        }
    }
    return travers;
}