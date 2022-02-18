#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    bool isPossible(int N, vector<pair<int, int>> &graph)
    {
        // Code here
        vector<int> adj[N + 1];
        vector<int> indegree(N, 0);
        for (auto i : graph)
        {
            adj[i.second].push_back(i.first);
            indegree[i.first] += 1;
        }
        vector<int> toposort;
        queue<int> q;
        for (int i = 0; i < N; i++)
        {
            if (indegree[i] == 0)
            {
                q.push(i);
            }
        }
        while (q.size())
        {
            int x = q.front();
            q.pop();
            toposort.push_back(x);

            for (auto i : adj[x])
            {
                indegree[i]--;
                if (indegree[i] == 0)
                {
                    q.push(i);
                }
            }
        }
        if (toposort.size() != N)
        {
            return false;
        }
        return true;
    }
};