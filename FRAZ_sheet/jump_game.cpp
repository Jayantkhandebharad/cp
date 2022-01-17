#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool canJump(vector<int> &nums)
    {
        int n = nums.size();
        int r = 0;

        for (int i = 0; i < n; i++)
        {
            if (i > r)
            {
                return false;
            }
            r = max(r, nums[i] + i);
        }

        return true;
    }
};