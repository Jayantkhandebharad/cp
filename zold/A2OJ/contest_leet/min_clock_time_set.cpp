/*
2162. Minimum Cost to Set Cooking Time
*/

#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int getans(int s, int m, int p, int mm, int ss)
    {
        int target = mm * 100 + ss;
        vector<int> v;
        int ans = 0;
        while (target)
        {
            v.push_back(target % 10);
            target = target / 10;
        }
        reverse(v.begin(), v.end());
        for (int i = 0; i < v.size(); i++)
        {
            if (s == v[i])
            {
                ans += p;
            }
            else
            {
                ans += p + m;
                s = v[i];
            }
        }
        return ans;
    }

    int minCostSetTime(int startAt, int moveCost, int pushCost, int targetSeconds)
    {
        int t = targetSeconds, s = startAt, m = moveCost, p = pushCost;
        int x = t / 60;
        int k = 0;
        int y = t % 60;
        int ans = INT_MAX;
        if (t <= 99)
        {
            ans = min(ans, getans(s, m, p, 0, t));
            if (t >= 60)
            {
                ans = min(ans, getans(s, m, p, 1, t % 60));
            }
        }
        else
        {
            if (x < 100)
            {
                ans = min(ans, getans(s, m, p, x, y));
            }
            if (y < 40)
            {
                ans = min(ans, getans(s, m, p, x - 1, y + 60));
            }
        }
        return ans;
    }
};