#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string removeDuplicates(string s)
    {
        string str = "";
        vector<char> x;
        for (auto i : s)
        {
            if (x.empty())
            {
                x.emplace_back(i);
                continue;
            }
            if (x[x.size() - 1] == i)
            {
                x.pop_back();
            }
            else
            {
                x.emplace_back(i);
            }
        }
        for (auto i : x)
        {
            str += i;
        }
        return str;
    }
};