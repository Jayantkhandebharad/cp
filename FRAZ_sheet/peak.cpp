/*Given an integer array nums, find a peak element, and return its index. If the array contains multiple peaks, return the index to any of the peaks.

You may imagine that nums[-1] = nums[n] = -∞.

You must write an algorithm that runs in O(log n) time.*/
//problem link: https://leetcode.com/problems/find-peak-element/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findPeakElement(vector<int> &nums, int left, int right)
    {

        int mid;
        int x, y;

        mid = left + (right - left) / 2;

        if ((mid == 0 || nums[mid - 1] <= nums[mid]) &&
            (mid == nums.size() - 1 || nums[mid + 1] <= nums[mid]))
        {
            return mid;
        }
        if (mid - 1 >= 0 && nums[mid - 1] > nums[mid])
        {
            return findPeakElement(nums, left, mid - 1);
        }
        return findPeakElement(nums, mid + 1, right);
    }
    int findPeakElement(vector<int> &nums)
    {
        if (nums.size() == 0)
        {
            return -1;
        }

        int index = findPeakElement(nums, 0, nums.size() - 1);
        return index;
    }
};