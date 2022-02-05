#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    bool canFinish(int n, vector<vector<int>> &pre)
    {
        vector<int> indeg(n, 0);
        vector<vector<int>> adj(n);

        for (int i = 0; i < pre.size(); i++)
        {
            adj[pre[i][0]].push_back(pre[i][1]);
            indeg[pre[i][1]]++;
        }
        queue<int> q;
        for (int i = 0; i < n; i++)
        {
            if (indeg[i] == 0)
            {
                q.push(i);

                while (!q.empty())
                {
                    int t = q.front();
                    q.pop();
                    for (int j = 0; j < adj[t].size(); j++)
                    {
                        indeg[adj[t][j]]--;
                        if (indeg[adj[t][j]] == 0)
                        {
                            q.push(adj[t][j]);
                        }
                    }
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (indeg[i] >= 1)
            {
                return false;
            }
        }
        return true;
    }
};