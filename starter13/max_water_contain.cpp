/*
11. Container With Most Water

You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).

Find two lines that together with the x-axis form a container, such that the container contains the most water.

Return the maximum amount of water a container can store.

Notice that you may not slant the container.
*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        //vector<int> area;
        int left = 0, right = height.size() - 1;
        int max1 = 0;
        while (left < right)
        {
            //area.push_back(min(height[left],height[right])*(right-left));
            max1 = max((min(height[left], height[right]) * (right - left)), max1);
            if (height[left] < height[right])
            {
                left++;
            }
            else
            {
                right--;
            }
        }
        return max1;
    }
};