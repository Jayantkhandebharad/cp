/*
1465. Maximum Area of a Piece of Cake After Horizontal and Vertical Cuts

You are given a rectangular cake of size h x w and two arrays of integers horizontalCuts and verticalCuts where:

horizontalCuts[i] is the distance from the top of the rectangular cake to the ith horizontal cut and similarly, and
verticalCuts[j] is the distance from the left of the rectangular cake to the jth vertical cut.
Return the maximum area of a piece of cake after you cut at each horizontal and vertical position provided in the arrays horizontalCuts and verticalCuts. Since the answer can be a large number, return this modulo 109 + 7.
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
class Solution
{
public:
    int maxArea(int h, int w, vector<int> &horizontalCuts, vector<int> &verticalCuts)
    {
        ll m = 1000000007;
        ll hc = 0, vc = 0;
        horizontalCuts.push_back(h);
        verticalCuts.push_back(w);
        sort(verticalCuts.begin(), verticalCuts.end());
        sort(horizontalCuts.begin(), horizontalCuts.end());

        hc = horizontalCuts[0];
        vc = verticalCuts[0];

        for (int i = 1; i < horizontalCuts.size(); i++)
        {
            hc = max(hc, (ll)(horizontalCuts[i] - horizontalCuts[i - 1]));
        }

        for (int i = 1; i < verticalCuts.size(); i++)
        {
            vc = max(vc, (ll)(verticalCuts[i] - verticalCuts[i - 1]));
        }
        ll area = hc * vc;
        return (int)((area) % m);
    }
};