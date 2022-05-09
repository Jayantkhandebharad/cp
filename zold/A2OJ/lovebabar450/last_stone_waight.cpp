#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int lastStoneWeight(vector<int> &stones)
    {
        priority_queue<int> q;
        for (auto i : stones)
        {
            q.push(i);
        }
        int x, y;
        while (q.size() > 1)
        {
            y = q.top();
            q.pop();
            x = q.top();
            q.pop();
            if (x == y)
            {
                continue;
            }
            else
            {
                q.push(y - x);
            }
        }
        if (q.size() == 1)
        {
            int qq = q.top();
            q.pop();
            return qq;
        }
        return 0;
    }
};