/*
Given an integer array nums of unique elements, return all possible subsets (the power set).

The solution set must not contain duplicate subsets. Return the solution in any order.
*/

#include <bits/stdc++.h>
using namespace std;

// class Solution {
// public:
//     void f(vector<vector<int>> &result,vector<int> &nums,int i,int n,vector<int> arr){

//         if(i==n){
//             result.push_back(arr);
//             return;
//         }
//         f(result,nums,i+1,n,arr);
//         arr.push_back(nums[i]);
//         f(result,nums,i+1,n,arr);
//         arr.pop_back();
//         return;

//     }

//     vector<vector<int>> subsets(vector<int>& nums) {
//         vector<int> a;
//         vector<vector<int>> result;
//         f(result,nums,0,nums.size(),a);

//         return result;
//     }
// };

class Solution
{
public:
    vector<vector<int>> subsets(vector<int> &nums)
    {
        vector<vector<int>> ans;
        int n = nums.size();
        int SubSize = pow(2, n);

        for (int counter = 0; counter < SubSize; ++counter)
        {
            vector<int> s;
            for (int i = 0; i < n; ++i)
            {
                if (counter & (1 << i))
                {
                    s.push_back(nums[i]);
                }
            }
            ans.push_back(s);
        }
        return ans;
    }
};