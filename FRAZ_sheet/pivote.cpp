#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int pivotIndex(vector<int> &nums)
    {
        vector<int> right(nums.size()), left(nums.size());
        int sum = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            left[i] = sum;
            sum += nums[i];
        }
        sum = 0;
        int a = INT_MIN;
        for (int i = nums.size() - 1; i >= 0; i--)
        {
            right[i] = sum;
            sum += nums[i];
            if (right[i] == left[i])
            {
                a = i;
            }
        }
        if (a >= 0)
        {
            return a;
        }
        return -1;
    }
};