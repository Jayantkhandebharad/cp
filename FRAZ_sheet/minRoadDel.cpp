/*1578. Minimum Time to Make Rope Colorful
Alice has n balloons arranged on a rope. You are given a 0-indexed string colors where colors[i] is the color of the ith balloon.

Alice wants the rope to be colorful. She does not want two consecutive balloons to be of the same color, so she asks Bob for help. Bob can remove some balloons from the rope to make it colorful. You are given a 0-indexed integer array neededTime where neededTime[i] is the time (in seconds) that Bob needs to remove the ith balloon from the rope.

Return the minimum time Bob needs to make the rope colorful.*/

#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int minCost(string colors, vector<int> &neededTime)
    {
        int a, m, i = 0;
        a = 0;

        if (colors.size() <= 1)
        {
            return 0;
        }
        while (i <= colors.size() - 1)
        {
            i++;
            if (colors[i] == colors[i - 1])
            {
                m = min(neededTime[i], neededTime[i - 1]);
                a += m;
                neededTime[i] = max(neededTime[i], neededTime[i - 1]);
            }
        }
        return a;
    }
};