/*

*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int threeSumClosest(vector<int> &nums, int target)
    {
        int min1 = INT_MAX;
        sort(nums.begin(), nums.end());
        int j, k;
        int sol;
        for (int i = 0; i < nums.size(); i++)
        {
            j = i + 1;
            k = nums.size() - 1;

            while (j < k)
            {
                if (nums[i] + nums[j] + nums[k] <= target)
                {
                    if (min1 > abs(target - nums[i] - nums[j] - nums[k]))
                    {
                        sol = nums[i] + nums[j] + nums[k];

                        min1 = abs(target - nums[i] - nums[j] - nums[k]);
                    }
                    j++;
                }
                else
                {
                    if (abs(nums[i] + nums[j] + nums[k] - target) < min1)
                    {
                        sol = nums[i] + nums[j] + nums[k];

                        min1 = abs(nums[i] + nums[j] + nums[k] - target);
                    }
                    k--;
                }
                //if(nums[i]+nums[j]+nums[k]>target)
            }
        }
        return sol;
    }
};