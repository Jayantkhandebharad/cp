/*
2149. Rearrange Array Elements by Sign

You are given a 0-indexed integer array nums of even length consisting of an equal number of positive and negative integers.

You should rearrange the elements of nums such that the modified array follows the given conditions:

Every consecutive pair of integers have opposite signs.
For all integers with the same sign, the order in which they were present in nums is preserved.
The rearranged array begins with a positive integer.
Return the modified array after rearranging the elements to satisfy the aforementioned conditions.
*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> rearrangeArray(vector<int> &nums)
    {
        int p = 0, n = 0, flag = 0;
        int k = 0;
        vector<int> aa;
        while (p < nums.size() and n < nums.size())
        {
            while (p < nums.size() and nums[p] < 0)
            {
                p++;
            }
            while (n < nums.size() and nums[n] > -1)
            {
                n++;
            }
            if (flag == 0)
            {
                aa.push_back(nums[p]);
                flag = 1;
                p++;
            }
            else
            {
                aa.push_back(nums[n]);
                n++;
                flag = 0;
            }
            k++;
        }
        while (n < nums.size() and nums[n] < 0)
        {
            aa.push_back(nums[n]);
            n++;
        }
        while (p < nums.size() and nums[p] > 0)
        {
            aa.push_back(nums[p]);
            p++;
        }
        return aa;
    }
};