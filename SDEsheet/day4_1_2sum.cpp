//Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
//You may assume that each input would have exactly one solution, and you may not use the same element twice.
//You can return the answer in any order.
//problem link:https://leetcode.com/problems/two-sum/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        vector<int> aa;
        unordered_map<int, int> aab;
        for (int i = 0; i < nums.size(); i++)
        {
            if (aab.find(target - nums[i]) != aab.end())
            {
                aa.push_back(aab[target - nums[i]]);
                aa.push_back(i);
                return aa;
            }

            aab[nums[i]] = i;
        }
        return aa;
    }
};