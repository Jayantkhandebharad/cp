#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
    {
        vector<int> a;
        unordered_map<int, int> map;
        for (int i : nums1)
        {
            map[i] = INT_MAX;
        }
        for (int i : nums2)
        {
            map[i]--;
            if (map[i] == INT_MAX - 1)
            {
                a.push_back(i);
            }
        }
        return a;
    }
};