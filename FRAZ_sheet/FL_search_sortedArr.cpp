/*Given an array of integers nums sorted in ascending order, find the starting and ending position of a given target value.

If target is not found in the array, return [-1, -1].

You must write an algorithm with O(log n) runtime complexity.
*/
//problem link:https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/

#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> searchRange(vector<int> &nums, int target)
    {
        vector<int> a;
        a.push_back(firstocc(nums, target));
        a.push_back(lastocc(nums, target));
        return a;
    }
    int firstocc(vector<int> &nums, int target)
    {
        int right = nums.size() - 1;
        int left = 0, mid;
        int x = -1;
        while (left <= right)
        {
            mid = left + (right - left) / 2;
            if (target == nums[mid])
            {
                x = mid;
                right = mid - 1;
            }
            else if (target < nums[mid])
            {
                right = mid - 1;
            }
            else
            {
                left = mid + 1;
            }
        }
        return x;
    }
    int lastocc(vector<int> &nums, int target)
    {
        int right = nums.size() - 1;
        int left = 0, mid;
        int x = -1;
        while (left <= right)
        {
            mid = left + (right - left) / 2;
            if (target == nums[mid])
            {
                x = mid;
                left = mid + 1;
            }
            else if (target > nums[mid])
            {
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
        }
        return x;
    }
};