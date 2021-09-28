//note it is leet code solution so only class is given and we just need to return through it

//Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.
//There is only one repeated number in nums, return this repeated number.
//You must solve the problem without modifying the array nums and uses only constant extra space.

//https://leetcode.com/problems/find-the-duplicate-number/

//hashing table approch
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int findDuplicate(vector<int> &nums)
    {
        vector<int> aa(nums.size() + 1, 0);
        for (int i = 0; i < nums.size() + 1; i++)
        {
            if (aa[nums[i]] == 1)
            {
                return nums[i];
            }
            aa[nums[i]] = 1;
        }
        return 1;
    }
};