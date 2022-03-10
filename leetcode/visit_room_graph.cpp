#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool canVisitAllRooms(vector<vector<int>> &rooms)
    {
        queue<int> q;
        vector<int> vis(rooms.size(), 0);
        q.push(0);
        vis[0] = 1;
        while (!q.empty())
        {
            int top1 = q.front();
            q.pop();
            for (auto i : rooms[top1])
            {
                if (!vis[i])
                {
                    q.push(i);
                    vis[i] = 1;
                }
            }
        }
        for (auto i : vis)
        {
            if (i == 0)
            {
                return false;
            }
        }
        return true;
    }
};