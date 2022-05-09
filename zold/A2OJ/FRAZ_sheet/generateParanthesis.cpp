//problem link: https://leetcode.com/problems/generate-parentheses/submissions/
#include <bits/stdc++.h>

using namespace std;
class Solution
{
public:
    vector<string> generateParenthesis(int n)
    {
        vector<string> a;
        findAll("(", 1, 0, a, n);
        return a;
    }

    void findAll(string current, int open, int close, vector<string> &a, int n)
    {
        if (current.size() == 2 * n)
        {
            a.push_back(current);
            return;
        }
        if (open < n)
            findAll(current + "(", open + 1, close, a, n);
        if (close < open)
            findAll(current + ")", open, close + 1, a, n);
    }
};