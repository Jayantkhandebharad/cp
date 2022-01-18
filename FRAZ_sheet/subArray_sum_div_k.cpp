/*

*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int subarraysDivByK(vector<int> &nums, int k)
    {
        unordered_map<int, int> upm;
        int count = 0;
        int n = nums.size();
        upm[0] = 1;
        int acc = 0, rem = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            acc += nums[i];
            rem = acc % k;
            if (rem < 0)
            {
                rem += k;
            }
            if (upm.find(rem) != upm.end())
            {
                count += upm[rem];
            }
            upm[rem]++;
        }
        return count;
    }
};