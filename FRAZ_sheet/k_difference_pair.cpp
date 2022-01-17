/*
532. K-diff Pairs in an Array


Given an array of integers nums and an integer k, return the number of unique k-diff pairs in the array.

A k-diff pair is an integer pair (nums[i], nums[j]), where the following are true:

0 <= i < j < nums.length
|nums[i] - nums[j]| == k
Notice that |val| denotes the absolute value of val.

*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findPairs(vector<int> &nums, int k)
    {
        sort(nums.begin(), nums.end());
        int ans = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            if (i && nums[i] == nums[i - 1])
            {
                continue;
            }
            int ele = nums[i];
            int elee = ele + k;
            auto a = lower_bound(nums.begin() + i + 1, nums.end(), elee);
            if (a != nums.end())
            {
                if (*a == elee)
                {
                    ans++;
                }
            }
        }
        return ans;
    }
};