#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int d;
    int issafe(long long x, vector<int> &nums)
    {
        int count = 1;
        int remain = x;
        for (auto i : nums)
        {
            if (i > x)
            {
                return false;
            }
            remain -= i;
            if (remain < 0)
            {
                count++;
                remain = x - i;
            }
        }
        return count <= d;
    }
    int splitArray(vector<int> &nums, int m)
    {
        long long high = 0;
        long long low = 0;
        long long mid = 0;
        d = m;
        for (int i = 0; i < nums.size(); i++)
        {
            high += nums[i];
        }

        while (low < high)
        {
            mid = (high + low) / 2;
            if (issafe(mid, nums))
            {
                high = mid;
            }
            else
            {
                low = mid + 1;
            }
        }
        return low;
    }
};