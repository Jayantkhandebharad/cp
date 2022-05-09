/* 
131. Palindrome Partitioning
Given a string s, partition s such that every substring of the partition is a palindrome. Return all possible palindrome partitioning of s.

A palindrome string is a string that reads the same backward as forward.
*/

#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void f(int i, string s, vector<string> &path, vector<vector<string>> &ans)
    {
        if (i == s.size())
        {
            ans.push_back(path);
            return;
        }
        for (int j = i; j < s.size(); ++j)
        {
            if (palindrome(s, i, j))
            {
                path.push_back(s.substr(i, j - i + 1));
                f(j + 1, s, path, ans);
                path.pop_back();
            }
        }
    }

    bool palindrome(string s, int start, int end)
    {
        while (start <= end)
        {
            if (s[start++] != s[end--])
            {
                return false;
            }
        }
        return true;
    }

    vector<vector<string>> partition(string s)
    {
        vector<vector<string>> ans;
        vector<string> aa;
        f(0, s, aa, ans);
        return ans;
    }
};