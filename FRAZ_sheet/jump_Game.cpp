/*
45. Jump Game II

Given an array of non-negative integers nums, you are initially positioned at the first index of the array.

Each element in the array represents your maximum jump length at that position.

Your goal is to reach the last index in the minimum number of jumps.

You can assume that you can always reach the last index.


*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int jump(vector<int> &nums)
    {
        int f = 0, reach = 0, res = 0;
        for (int i = 0; i < nums.size() - 1; i++)
        {
            f = max(f, nums[i] + i);
            if (reach == i)
            {
                reach = f;
                res++;
            }
        }
        return res;
    }
};