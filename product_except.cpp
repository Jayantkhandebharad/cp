/* 
238. Product of Array Except Self
Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].

The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

You must write an algorithm that runs in O(n) time and without using the division operation.

 


*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> productExceptSelf(vector<int> &nums)
    {
        vector<int> ans;

        int product = 1;
        int i;

        //product after array
        for (i = nums.size() - 1; i > -1; i--)
        {
            ans.push_back(product);
            product = product * nums[i];
        }

        reverse(ans.begin(), ans.end());

        int product_before = 1;
        for (i = 0; i < nums.size(); i++)
        {
            ans[i] = ans[i] * product_before;          //multiplying with the product_before
            product_before = product_before * nums[i]; //updating the product_before
        }

        return ans;
    }
};