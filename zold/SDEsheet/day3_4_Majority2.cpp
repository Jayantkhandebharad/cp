//Given an integer array of size n, find all elements that appear more than ⌊ n/3 ⌋ times.

//problem link: https://leetcode.com/problems/majority-element-ii/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> majorityElement(vector<int> &nums)
    {
        int n1 = -1, n2 = -1, c1 = 0, c2 = 0;
        for (auto a : nums)
        {
            if (a == n1)
                c1++;
            else if (a == n2)
                c2++;
            else if (c1 == 0)
            {
                n1 = a;
                c1++;
            }
            else if (c2 == 0)
            {
                n2 = a;
                c2++;
            }
            else
            {
                c1--;
                c2--;
            }
        }
        vector<int> aaa;
        int cc1 = 0, cc2 = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == n1)
            {
                cc1++;
            }
            else if (nums[i] == n2)
            {
                cc2++;
            }
        }
        if (cc1 > nums.size() / 3)
        {
            aaa.push_back(n1);
        }
        if (cc2 > nums.size() / 3)
        {
            aaa.push_back(n2);
        }

        return aaa;
    }
};