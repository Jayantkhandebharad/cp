#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> topKFrequent(vector<int> &nums, int k)
    {
        unordered_map<int, int> x;
        vector<int> ans, dummy;
        for (auto i : nums)
        {
            x[i]++;
        }
        for (auto i : x)
        {
            dummy.push_back(i.second);
        }
        sort(dummy.begin(), dummy.end(), greater<int>());
        if (dummy.size() <= k)
        {
            for (auto i : x)
            {
                ans.push_back(i.first);
            }
            return ans;
        }
        int l = dummy[k - 1];
        for (auto i : x)
        {
            if (i.second >= l)
            {
                ans.push_back(i.first);
            }
        }
        if (ans.size() > k)
        {
            while (ans.size() != k)
            {
                ans.pop_back();
            }
        }
        return ans;
    }
};