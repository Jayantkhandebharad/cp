//Implement next permutation, which rearranges numbers into the lexicographically next greater permutation of numbers.
//If such an arrangement is not possible, it must rearrange it as the lowest possible order (i.e., sorted in ascending order).

//Problem link: https://leetcode.com/problems/next-permutation/

//we follow algorithm to do it

#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void nextPermutation(vector<int> &nums)
    {
        int n = nums.size(), k, l;
        for (k = n - 2; k >= 0; k--)
        {
            if (nums[k] < nums[k + 1])
            {
                break;
            }
        }
        if (k < 0)
        {
            reverse(nums.begin(), nums.end());
        }
        else
        {
            for (l = n - 1; l > k; l--)
            {
                if (nums[l] > nums[k])
                {
                    break;
                }
            }
            swap(nums[l], nums[k]);
            reverse(nums.begin() + k + 1, nums.end());
        }
    }
};