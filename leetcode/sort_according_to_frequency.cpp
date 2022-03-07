#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    static bool cmp(vector<int> a, vector<int> b)
    {
        if (a[1] == b[1])
        {
            return a[0] > b[0];
        }
        return a[1] < b[1];
    }

    vector<int> frequencySort(vector<int> &nums)
    {
        unordered_map<int, int> m;
        for (auto i : nums)
        {
            m[i]++;
        }
        vector<vector<int>> v;
        for (auto i : m)
        {
            vector<int> a(2);
            a[0] = i.first;
            a[1] = i.second;
            v.push_back(a);
        }
        sort(v.begin(), v.end(), cmp);
        int idx = 0;
        for (auto i : v)
        {
            for (int j = 0; j < i[1]; j++)
            {
                nums[idx] = i[0];
                idx++;
            }
        }
        return nums;
    }
};