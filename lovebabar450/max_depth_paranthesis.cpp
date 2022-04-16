//1614. Maximum Nesting Depth of the Parentheses

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxDepth(string s)
    {
        int st = 0;
        int mx = 0;
        for (auto i : s)
        {
            if (i == '(')
            {
                st++;
            }
            else if (i == ')')
            {
                st--;
            }
            mx = max(mx, st);
        }
        return mx;
    }
};