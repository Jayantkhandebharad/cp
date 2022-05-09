//Given an array nums of n integers, return an array of all the unique quadruplets [nums[a], nums[b], nums[c], nums[d]] such that:
//0 <= a, b, c, d < n
//a, b, c, and d are distinct.
//nums[a] + nums[b] + nums[c] + nums[d] == target
//You may return the answer in any order.

//problem link: https://leetcode.com/problems/4sum/

#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<vector<int>> fourSum(vector<int> &nums, int target)
    {
        if (nums.size() < 3)
        {
            vector<vector<int>> ll;
            return ll;
        }
        long long target1 = 0 + target;
        set<vector<int>> abc;
        int left, right;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size() - 2; i++)
        {

            for (int j = i + 1; j < nums.size() - 1; j++)
            {
                left = j + 1;
                long long target2 = target1 - nums[i] - nums[j];
                right = nums.size() - 1;
                while (left < right)
                {
                    long long h = nums[left] + nums[right];

                    if (h > target2)
                    {
                        right = right - 1;
                    }
                    else if (h < target2)
                    {
                        left++;
                    }
                    else
                    {

                        vector<int> aa;
                        aa.push_back(nums[i]);
                        aa.push_back(nums[j]);
                        aa.push_back(nums[left]);
                        aa.push_back(nums[right]);
                        abc.insert(aa);
                        left++;
                    }
                }
            }
        }
        vector<vector<int>> aaa;
        for (auto w : abc)
        {
            aaa.push_back(w);
        }
        return aaa;
    }
};