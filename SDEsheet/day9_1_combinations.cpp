/*
Given an array of distinct integers candidates and a target integer target, return a list of all unique combinations of candidates where the chosen numbers sum to target. You may return the combinations in any order.

The same number may be chosen from candidates an unlimited number of times. Two combinations are unique if the frequency of at least one of the chosen numbers is different.

It is guaranteed that the number of unique combinations that sum up to target is less than 150 combinations for the given input.*/

#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void f(int i, int t, vector<int> &arr, int n, vector<vector<int>> &ans, vector<int> x)
    {
        if (i == n)
        {
            if (t == 0)
            {
                ans.push_back(arr);
            }
            return;
        }
        if (x[i] <= t)
        {
            arr.push_back(x[i]);
            t -= x[i];
            f(i, t, arr, n, ans, x);
            t += x[i];
            arr.pop_back();
        }
        f(i + 1, t, arr, n, ans, x);
    }

    vector<vector<int>> combinationSum(vector<int> &candidates, int target)
    {
        vector<vector<int>> ab;
        vector<int> m;
        f(0, target, m, candidates.size(), ab, candidates);
        return ab;
    }
};