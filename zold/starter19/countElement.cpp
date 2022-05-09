/*
2148. Count Elements With Strictly Smaller and Greater Elements
User Accepted:8617
User Tried:9189
Total Accepted:8864
Total Submissions:15243
Difficulty:Easy
Given an integer array nums, return the number of elements that have both a strictly smaller and a strictly greater element appear in nums
*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int countElements(vector<int> &nums)
    {
        int max1 = INT_MIN, min1 = INT_MAX;
        for (auto i : nums)
        {
            max1 = max(i, max1);
            min1 = min(i, min1);
        }
        int cnt = 0;
        for (auto i : nums)
        {
            if (max1 == i || min1 == i)
            {
                continue;
            }
            cnt++;
        }
        return cnt;
    }
};