#include <bits/stdc++.h>
using namespace std;

class Solution
{
    int f(int ind, vector<int> &slotwt, vector<int> &nums, int numSlots, map<pair<int, vector<int>>, int> &dp)
    {
        if (ind >= nums.size())
        {
            return 0;
        }
        if (dp.find({ind, slotwt}) != dp.end())
        {
            return dp[{ind, slotwt}];
        }

        int maxi = INT_MIN;
        for (int i = 1; i <= numSlots; i++)
        {
            if (slotwt[i] < 2)
            {
                slotwt[i]++;
                int ans = (nums[ind] & i) + f(ind + 1, slotwt, nums, numSlots, dp);
                slotwt[i]--;
                maxi = max(maxi, ans);
            }
        }
        return dp[{ind, slotwt}] = maxi;
    }

public:
    int maximumANDSum(vector<int> &nums, int numSlots)
    {
        vector<int> slotwt(numSlots + 1, 0);
        map<pair<int, vector<int>>, int> dp;
        return f(0, slotwt, nums, numSlots, dp);
    }
};