/*

*/

#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> sortEvenOdd(vector<int> &nums)
    {
        vector<int> e, o;
        int i = 0, j = 0, k = 0;
        for (i = 0; i < nums.size(); i++)
        {
            if (i % 2 == 0)
            {
                e.push_back(nums[i]);
            }
            else
            {
                o.push_back(nums[i]);
            }
        }
        sort(e.begin(), e.end());
        sort(o.begin(), o.end(), greater<int>());
        for (i = 0; i < nums.size(); i++)
        {
            if (i % 2 == 0)
            {
                nums[i] = e[j];
                j++;
            }
            else
            {
                nums[i] = o[k];
                k++;
            }
        }
        return nums;
    }
};