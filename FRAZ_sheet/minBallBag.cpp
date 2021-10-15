/*You are given an integer array nums where the ith bag contains nums[i] balls. You are also given an integer maxOperations.

You can perform the following operation at most maxOperations times:

Take any bag of balls and divide it into two new bags with a positive number of balls.
For example, a bag of 5 balls can become two new bags of 1 and 4 balls, or two new bags of 2 and 3 balls.
Your penalty is the maximum number of balls in a bag. You want to minimize your penalty after the operations.

Return the minimum possible penalty after performing the operations.*/

//problem link:https://leetcode.com/problems/minimum-limit-of-balls-in-a-bag/

#include <bits/stdc++.h>
using namespace std;
class Solution
{
private:
    bool check(vector<int> &nums, int op, long m)
    {
        for (int i = 0; i < nums.size(); i++)
        {
            op -= (nums[i] / m);
            if (nums[i] % m == 0)
                op++;
        }
        return 0 <= op;
    }

public:
    int minimumSize(vector<int> &nums, int maxOperations)
    {
        long s = 1, e = INT_MAX, m;
        long ans = 0;
        while (s <= e)
        {
            m = s + (e - s) / 2;
            if (check(nums, maxOperations, m))
            {
                e = m - 1;
                ans = m;
            }
            else
            {
                s = m + 1;
            }
        }
        return ans;
    }
};