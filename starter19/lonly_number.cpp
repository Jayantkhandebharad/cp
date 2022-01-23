/*
2150. Find All Lonely Numbers in the Array

You are given an integer array nums. A number x is lonely when it appears only once, and no adjacent numbers (i.e. x + 1 and x - 1) appear in the array.

Return all lonely numbers in nums. You may return the answer in any order.
*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> findLonely(vector<int> &nums)
    {
        unordered_map<int, int> a;
        vector<int> b;
        for (int i = 0; i < nums.size(); i++)
        {
            a[nums[i]]++;
        }

        for (int i = 0; i < nums.size(); i++)
        {
            if (a[nums[i]] == 1 and a[nums[i] - 1] == 0 and a[nums[i] + 1] == 0)
            {

                b.push_back(nums[i]);
            }
        }

        return b;
    }
};
