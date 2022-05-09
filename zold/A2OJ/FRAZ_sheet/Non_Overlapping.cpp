#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int eraseOverlapIntervals(vector<vector<int>> &intervals)
    {
        vector<vector<int>> z;
        for (auto i : intervals)
        {
            z.push_back({i[1], i[0]});
        }
        sort(z.begin(), z.end());

        int ans = 0;
        int mx = -6e4;
        for (auto i : z)
        {
            if (i[1] >= mx)
            {
                mx = i[0];
                continue;
            }
            ans++;
        }
        return ans;
    }
};
