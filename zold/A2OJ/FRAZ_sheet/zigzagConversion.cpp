//https://leetcode.com/problems/zigzag-conversion/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string convert(string s, int numRows)
    {
        if (numRows == 1)
            return s;

        string a = "";
        for (int r = 0; r < numRows; r++)
        {
            int increment = 2 * (numRows - 1);
            for (int i = r; i < s.size(); i += increment)
            {
                a += s[i];
                if (r > 0 and r < numRows - 1 and i + increment - 2 * r < s.size())
                {
                    a += s[i + increment - 2 * r];
                }
            }
        }
        return a;
    }
};