/*Longest Substring Without Repeating Characters*/
//problem link:https://leetcode.com/problems/longest-substring-without-repeating-characters/

#include <bits/stdc++.h>

using namespace std;
class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        vector<int> aa(256, -1);
        int longest = 0, n = s.size(), left = 0, right = 0;

        while (right < n)
        {
            if (aa[s[right]] != -1)
            {
                left = max(aa[s[right]] + 1, left);
            }
            aa[s[right]] = right;
            longest = max(longest, right - left + 1);
            right++;
        }
        return longest;
    }
};