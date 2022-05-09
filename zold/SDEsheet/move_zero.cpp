#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        int z = 0, m = 0;
        int n = nums.size();
        while (z < n and m < n)
        {
            if (nums[z] == 0 and nums[m] != 0 and m > z)
            {
                swap(nums[z], nums[m]);
                z++;
                m++;
            }
            else if (nums[z] != 0)
            {
                z++;
            }
            else
            {
                m++;
            }
        }
    }
};