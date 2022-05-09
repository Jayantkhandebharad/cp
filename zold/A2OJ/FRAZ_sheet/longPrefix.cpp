/*Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".
*/

// problem link : https://leetcode.com/problems/longest-common-prefix/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        if (strs.size() < 1)
            return "";
        sort(strs.begin(), strs.end());
        string first = strs[0];
        string last = strs[strs.size() - 1];
        int i = 0;
        string a = "";
        while (i < min(strs[0].size(), strs[strs.size() - 1].size()) and first[i] == last[i])
        {
            a += first[i];
            i++;
        }
        return a;
    }
};