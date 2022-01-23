/*
2151. Maximum Good People Based on Statements

There are two types of persons:

The good person: The person who always tells the truth.
The bad person: The person who might tell the truth and might lie.
You are given a 0-indexed 2D integer array statements of size n x n that represents the statements made by n people about each other. More specifically, statements[i][j] could be one of the following:

0 which represents a statement made by person i that person j is a bad person.
1 which represents a statement made by person i that person j is a good person.
2 represents that no statement is made by person i about person j.
Additionally, no person ever makes a statement about themselves. Formally, we have that statements[i][i] = 2 for all 0 <= i < n.

Return the maximum number of people who can be good based on the statements made by the n people
*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool check(int x, vector<vector<int>> &s)
    {
        for (int i = 0; i < s.size(); i++)
        {
            if ((1 << i) & x)
            {
                for (int j = 0; j < s.size(); j++)
                {
                    if ((s[i][j] == 0 and ((1 << j) & x)) or (s[i][j] == 1 and !((1 << j) & x)))
                        return false;
                }
            }
        }
        return true;
    }

    int maximumGood(vector<vector<int>> &s)
    {
        int ans = 0, n = s.size();
        for (int i = 0; i < (1 << n); i++)
        {
            if (check(i, s))
            {
                ans = max(ans, __builtin_popcount(i));
            }
        }
        return ans;
    }
};