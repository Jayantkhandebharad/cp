/*
219. Contains Duplicate II
Easy

2113

1753

Add to List

Share
Given an integer array nums and an integer k, return true if there are two distinct indices i and j in the array such that nums[i] == nums[j] and abs(i - j) <= k.
*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool containsNearbyDuplicate(vector<int> &nums, int k)
    {

        int n = nums.size();
        cout << n << endl;
        bool ans = false;

        if (k >= n)
        {

            sort(nums.begin(), nums.end());

            for (int i = 0; i < n - 1; i++)
            {

                if (nums[i] == nums[i + 1])
                {
                    return true;
                }
            }

            return false;
        }
        unordered_map<int, int> map;
        for (int i = 0; i < k; i++)
        {
            map[nums[i]] = i;
        }
        for (int i = 0; i < n; i++)
        {
            if (i + k < n)
            {
                map[nums[i + k]] = i + k;
            }
            if (map[nums[i]] < i + k + 1 and map[nums[i]] != i)
            {
                ans = true;
            }
        }
        return ans;
    }
};