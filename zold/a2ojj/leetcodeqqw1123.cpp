#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<int> intersection1(vector<int> &nums1, vector<int> &nums2)
    {
        unordered_set<int> m(nums1.begin(), nums1.end());
        vector<int> res;
        for (auto a : nums2)
            if (m.count(a))
            {
                res.push_back(a);
                m.erase(a);
            }
        return res;
    }
    vector<int> intersection(vector<vector<int>> &nums)
    {
        vector<int> ans = nums[0];
        for (int i = 1; i < nums.size(); i++)
        {
            ans = intersection1(ans, nums[i]);
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};