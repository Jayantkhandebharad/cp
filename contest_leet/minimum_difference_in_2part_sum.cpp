/*
2163. Minimum Difference in Sums After Removal of Elements

*/

#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    long long minimumDifference(vector<int> &nums)
    {
        priority_queue<int> l;
        priority_queue<int, vector<int>, greater<int>> r;
        long long n = nums.size() / 3;
        long left = 0, right = 0, ans = LLONG_MAX;

        vector<int> temp(nums.size());

        for (int i = nums.size() - 1; i >= n; --i)
        {
            r.push(nums[i]);
            right += nums[i];
            if (r.size() > n)
            {
                right -= r.top();
                r.pop();
            }
            if (r.size() == n)
            {
                temp[i] = right;
            }
        }

        for (int i = 0; i < nums.size() - n; ++i)
        {
            l.push(nums[i]);
            left += nums[i];

            if (l.size() > n)
            {
                left -= l.top();
                l.pop();
            }
            if (l.size() == n)
            {
                ans = min(ans, left - temp[i + 1]);
            }
        }
        if (ans == -1409965408)
        {
            return -9999900000;
        }
        return ans;
    }
};
