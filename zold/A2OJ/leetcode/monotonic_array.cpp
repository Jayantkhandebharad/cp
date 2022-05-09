#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isMonotonic(vector<int> &nums)
    {
        int x = 0, y = 0;
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] >= nums[i - 1])
            {
                x++;
            }
            if (nums[i] <= nums[i - 1])
            {
                y++;
            }
        }

        if (x == nums.size() - 1 or y == nums.size() - 1)
        {
            return true;
        }
        return false;
    }
};