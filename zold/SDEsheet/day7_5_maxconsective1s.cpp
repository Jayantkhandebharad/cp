
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int findMaxConsecutiveOnes(vector<int> &nums)
    {
        int i = 0, j = 0;
        int maxi = 0;
        bool flag = true;
        while (j < nums.size())
        {
            if (nums[j] == 1)
            {
                i++;
            }
            else
            {
                i = 0;
            }
            maxi = max(i, maxi);
            j++;
        }
        return maxi;
    }
};