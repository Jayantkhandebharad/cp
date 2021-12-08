#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int leastInterval(vector<char> &tasks, int n)
    {
        if (n == 0)
        {
            return tasks.size();
        }
        unordered_map<char, int> q;
        int max1 = 0;
        for (int i = 0; i < tasks.size(); i++)
        {
            q[tasks[i]]++;
        }

        int maxCount = 0;
        for (auto it : q)
        {
            maxCount = max(maxCount, it.second);
        }
        int res = (maxCount - 1) * (n + 1);
        for (auto it : q)
        {
            if (it.second == maxCount)
                res++;
        }

        res = max(res, (int)tasks.size());
        return res;
    }
};