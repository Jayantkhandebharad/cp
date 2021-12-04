#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void rotate(vector<int> &nums, int k)
    {
        if (nums.size() == 1)
        {
            return;
        }
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin() + (k % nums.size()));
        reverse(nums.begin() + (k % nums.size()), nums.end());
    }
};