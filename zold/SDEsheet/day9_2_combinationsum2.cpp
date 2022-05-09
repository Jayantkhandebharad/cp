/*
40. Combination Sum II

Given a collection of candidate numbers (candidates) and a target number (target), find all unique combinations in candidates where the candidate numbers sum to target.

Each number in candidates may only be used once in the combination.

Note: The solution set must not contain duplicate combinations.
*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void f(int ind, int t, vector<int> &ds, vector<int> &arr, vector<vector<int>> &ans)
    {
        if (t == 0)
        {
            ans.push_back(ds);
            return;
        }
        for (int i = ind; i < arr.size(); i++)
        {
            if (i > ind && arr[i] == arr[i - 1])
            {
                continue;
            }
            if (t < arr[i])
            {
                break;
            }
            ds.push_back(arr[i]);
            f(i + 1, t - arr[i], ds, arr, ans);
            ds.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int> &candidates, int target)
    {
        set<vector<int>> ab;
        vector<vector<int>> ll;
        vector<int> m;
        sort(candidates.begin(), candidates.end());
        f(0, target, m, candidates, ll);

        return ll;
    }
};