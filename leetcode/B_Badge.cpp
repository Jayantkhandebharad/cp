#include <bits/stdc++.h>
using namespace std;

int BFS(vector<vector<int>> &edges, int s, vector<int> &visited)
{
    int i, j, u, v;

    queue<int> q;
    q.push(s);
    visited[s] = 1;

    while (q.size())
    {
        u = q.front();
        q.pop();
        for (int i = 0; i < edges[u].size(); i++)
        {
            v = edges[u][i];
            if (!visited[v])
            {
                q.push(v);
                visited[v] = 1;
            }
        }
    }
    return v;
}

int main()
{
    int n, d;
    cin >> n;
    vector<vector<int>> edges(n + 1, vector<int>());
    for (int i = 1; i <= n; i++)
    {
        cin >> d;
        edges[i].push_back(d);
    }

    for (int i = 1; i <= n; i++)
    {
        vector<int> visited(n + 1);
        cout << BFS(edges, i, visited) << " ";
        if (i == n)
        {
            cout << endl;
        }
    }
    return 0;
}