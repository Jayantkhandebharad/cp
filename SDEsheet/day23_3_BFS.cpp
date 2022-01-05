/*
BFS of graph 

Given a directed graph. The task is to do Breadth First Traversal of this graph starting from 0.
Note: One can move from node u to node v only if there's an edge from u to v and find the BFS traversal of the graph starting from the 0th vertex, from left to right according to the graph. Also, you should only take nodes directly or indirectly connected from Node 0 in consideration.
*/

#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[])
    {
        // Code here
        vector<int> visited(V, 0);
        vector<int> ans;
        queue<int> q;
        q.push(0);
        while (!q.empty())
        {
            int i = q.front();
            ans.push_back(q.front());
            q.pop();

            for (auto x : adj[i])
            {
                if (!visited[x])
                {
                    visited[x] = 1;
                    q.push(x);
                }
            }
        }
        return ans;
    }
};