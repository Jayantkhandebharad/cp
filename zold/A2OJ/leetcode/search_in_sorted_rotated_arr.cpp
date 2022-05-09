#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool search(vector<int> &nums, int target)
    {
        int l = 0;
        int r = nums.size() - 1;
        int mid = 0;
        while (l <= r)
        {
            mid = l + (r - l) / 2;
            if (nums[mid] == target)
            {
                return true;
            }
            if (nums[l] == nums[mid] and nums[mid] == nums[r])
            {
                l++;
                r--;
            }
            else if (nums[l] <= nums[mid])
            {
                if (nums[l] <= target and target < nums[mid])
                {
                    r = mid - 1;
                }
                else
                {
                    l = mid + 1;
                }
            }
            else
            {
                if (nums[r] >= target and nums[mid] < target)
                {
                    l = mid + 1;
                }
                else
                {
                    r = mid - 1;
                }
            }
        }
        return false;
    }
};