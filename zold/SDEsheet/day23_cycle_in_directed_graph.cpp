#include <queue>
using namespace std;

int detectCycleInDirectedGraph(int n, vector<pair<int, int>> &edges)
{
    // Write your code here.

    queue<int> q;
    vector<int> indeg(n + 1, 0);
    vector<int> adj[n + 1];
    for (auto x : edges)
    {
        int u = x.first;
        int v = x.second;
        adj[u].push_back(v);
        indeg[v]++;
    }
    for (int i = 1; i <= n; i++)
    {
        if (indeg[i] == 0)
        {
            q.push(i);
        }
    }
    int cnt = 0;
    while (!q.empty())
    {

        int node = q.front();
        q.pop();
        cnt++;
        for (auto x : adj[node])
        {
            indeg[x]--;
            if (indeg[x] == 0)
            {
                q.push(x);
            }
        }
    }
    return (cnt != n);
}