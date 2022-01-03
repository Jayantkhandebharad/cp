/*
42. Trapping Rain Water

Given n non-negative integers representing an elevation map where the width of each bar is 1, compute how much water it can trap after raining.

 */

#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int trap(vector<int> &height)
    {
        int r1 = 0;
        int l1 = 0;
        int x = 0;
        vector<int> left(height.size(), 0);

        vector<int> right(height.size(), 0);
        for (int i = 1; i < height.size(); i++)
        {
            if (left[i - 1] < height[i - 1])
            {
                left[i] = height[i - 1];
            }
            else
            {
                left[i] = left[i - 1];
            }
        }

        for (int i = height.size() - 2; i >= 0; i--)
        {
            if (right[i + 1] < height[i + 1])
            {
                right[i] = height[i + 1];
            }
            else
            {
                right[i] = right[i + 1];
            }
        }
        for (int i = 0; i < height.size(); i++)
        {
            if (min(right[i], left[i]) - height[i] > 0)
            {
                x += min(right[i], left[i]) - height[i];
            }
        }
        return x;
    }
};