//Given an array nums of size n, return the majority element.
//The majority element is the element that appears more than ⌊n / 2⌋ times.
//You may assume that the majority element always exists in the array.

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        int el = 0, count = 0;
        int i = 0;
        while (i < nums.size())
        {
            if (count == 0)
            {
                el = nums[i];
            }
            if (el == nums[i])
            {
                count++;
            }
            else
            {
                count--;
            }
            i++;
        }
        return el;
    }
};