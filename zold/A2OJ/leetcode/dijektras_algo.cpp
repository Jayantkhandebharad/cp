#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    //Function to find the shortest distance of all the vertices
    //from the source vertex S.
    vector<int> dijkstra(int V, vector<vector<int>> adj[], int S)
    {
        // Code here
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> q;
        vector<int> dist(V + 1, INT_MAX);
        dist[S] = 0;
        q.push(make_pair(0, S));

        while (q.size())
        {
            int dist1 = q.top().first;
            int prev = q.top().second;
            q.pop();
            for (auto i : adj[prev])
            {
                int next = i[0];
                int nextdis = i[1] + dist1;
                if (dist[next] > nextdis)
                {
                    dist[next] = nextdis;
                    q.push({nextdis, next});
                }
            }
        }
        return dist;
    }
};