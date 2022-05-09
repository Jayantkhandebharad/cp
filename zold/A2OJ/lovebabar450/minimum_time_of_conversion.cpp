//minimum-number-of-operations-to-convert-time

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int gettime(string &s)
    {
        return stoi(s.substr(0, 2)) * 60 + stoi(s.substr(3.5));
    }

    int convertTime(string current, string correct)
    {
        int diff = gettime(current) - gettime(correct);
        if (diff < 0)
        {
            diff = diff * (-1);
        }
        int ans = diff / 60;
        diff = diff % 60;
        ans += diff / 15;
        diff = diff % 15;
        ans += diff / 5;
        diff = diff % 5;
        ans += diff;
        return ans;
    }
};