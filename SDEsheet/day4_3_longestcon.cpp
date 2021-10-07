/*Given an unsorted array of integers nums, return the length of the longest consecutive elements sequence.

You must write an algorithm that runs in O(n) time.*/
//problem link: https://leetcode.com/problems/longest-consecutive-sequence/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int longestConsecutive(vector<int> &nums)
    {
        set<int> aa;
        for (auto a : nums)
        {
            aa.insert(a);
        }
        int longest = 0;
        for (auto i : nums)
        {
            if (!aa.count(i - 1))
            {
                int curnum = i;
                int curstk = 1;
                while (aa.count(curnum + 1))
                {
                    curnum += 1;
                    curstk += 1;
                }
                longest = max(longest, curstk);
            }
        }
        return longest;
    }
};