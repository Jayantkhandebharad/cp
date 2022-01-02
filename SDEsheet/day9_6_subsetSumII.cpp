/*
90. Subsets II
Given an integer array nums that may contain duplicates, return all possible subsets (the power set).

The solution set must not contain duplicate subsets. Return the solution in any order.
*/

#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void f(int i, vector<int> &sum, vector<int> &arr, int n, vector<vector<int>> &x)
    {
        if (i == n)
        {

            x.push_back(sum);
            return;
        }
        f(i + 1, sum, arr, n, x);
        sum.push_back(arr[i]);
        f(i + 1, sum, arr, n, x);
        sum.pop_back();
    }

    vector<vector<int>> subsetsWithDup(vector<int> &nums)
    {
        vector<vector<int>> x, y;
        vector<int> sum;
        f(0, sum, nums, nums.size(), x);
        set<vector<int>> as;
        for (auto i : x)
        {
            sort(i.begin(), i.end());
            as.insert(i);
        }
        for (auto i : as)
        {
            y.push_back(i);
        }

        return y;
    }
};