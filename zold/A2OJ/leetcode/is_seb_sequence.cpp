#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isSubsequence(string s, string t)
    {
        if (s.size() > t.size())
        {
            return false;
        }

        int i = 0, j = 0;
        int x = 0;
        while (i < s.size() and j < t.size())
        {
            if (s[i] == t[j])
            {
                x++;
                i++;
            }
            j++;
        }
        if (x == s.size())
        {
            return true;
        }
        return false;
    }
};