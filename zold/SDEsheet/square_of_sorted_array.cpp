#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int square(int a)
    {
        return pow(a, 2);
    }
    vector<int> sortedSquares(vector<int> &nums)
    {
        vector<int> x(nums.size());
        int low = 0;
        int high = nums.size() - 1;
        int q = nums.size() - 1;
        while (high >= low)
        {
            if (square(nums[low]) > square(nums[high]))
            {
                x[q] = square(nums[low]);
                low++;
                q--;
            }
            else
            {
                x[q] = square(nums[high]);
                high--;
                q--;
            }
        }
        return x;
    }
};