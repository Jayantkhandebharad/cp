/*
46. Permutations

Given an array nums of distinct integers, return all the possible permutations. You can return the answer in any order.
*/

#include <bits/stdc++.h>

using namespace std;

class Solution
{

public:
    void f(int n, vector<int> &arr, vector<int> &nums, vector<vector<int>> &ans, int freq[])
    {
        if (arr.size() == n)
        {
            ans.push_back(arr);
            return;
        }
        for (int i = 0; i < n; i++)
        {
            if (!freq[i])
            {
                arr.push_back(nums[i]);
                freq[i] = 1;
                f(n, arr, nums, ans, freq);
                freq[i] = 0;
                arr.pop_back();
            }
        }
    }
    vector<vector<int>> permute(vector<int> &nums)
    {
        vector<vector<int>> ans;
        vector<int> ds;
        int freq[nums.size()];
        for (int i = 0; i < nums.size(); i++)
        {
            freq[i] = 0;
        }
        f(nums.size(), ds, nums, ans, freq);
        return ans;
    }
};