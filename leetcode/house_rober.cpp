#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int f(vector<int> &nums, int i, int sum, vector<int> &dp)
    {
        if (i >= nums.size())
        {
            return sum;
        }

        if (dp[i] != -1)
        {
            return dp[i];
        }

        int sum1 = f(nums, i + 1, sum, dp);
        int sum2 = nums[i] + f(nums, i + 2, sum, dp);
        sum = max(sum1, sum2);
        return dp[i] = sum;
    }
    int rob(vector<int> &nums)
    {
        int n = nums.size();
        int e = 0;
        int o = 0;
        vector<int> dp(nums.size(), -1);
        o = f(nums, 0, o, dp);
        e = f(nums, 1, e, dp);
        return max(e, o);
    }
};