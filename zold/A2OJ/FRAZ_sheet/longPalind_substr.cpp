//problem link: https://leetcode.com/problems/longest-palindromic-substring/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string longestPalindrome(string s)
    {

        int i, j, m = 0, longest = 0;
        int x = 0, y = 0;

        if (s.size() <= 1)
        {
            return s;
        }
        for (int k = 0; k < s.size(); k++)
        {
            i = expandFromMid(s, k, k);
            j = expandFromMid(s, k, k + 1);
            longest = max(i, j);
            if (longest > y - x)
            {
                x = (k - (longest - 1) / 2);
                y = (k + (longest) / 2);
            }
        }
        string aa = "";
        for (int i = x; i <= y; i++)
        {
            aa += s[i];
        }
        return aa;
    }
    int expandFromMid(string s, int a, int b)
    {
        if (s == "" || s.size() < 1)
            return 0;
        while (a >= 0 and b < s.size() and s[a] == s[b])
        {
            b++;
            a--;
        }
        return b - a - 1;
    }
};