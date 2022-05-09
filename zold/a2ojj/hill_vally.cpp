#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int countHillValley(vector<int> &nums)
    {
        bool hill = true;
        bool vally = true;
        int x = 0;
        while (x < nums.size() and nums[0] == nums[x])
        {
            x++;
        }
        if (x == nums.size())
        {
            return 0;
        }
        int count = 0;
        for (int i = x; i < nums.size(); i++)
        {
            if (hill and nums[i] < nums[i - 1])
            {
                count++;
                vally = true;
                hill = false;
            }
            else if (vally and nums[i] > nums[i - 1])
            {
                count++;
                vally = false;
                hill = true;
            }
        }
        return count - 1;
    }
};