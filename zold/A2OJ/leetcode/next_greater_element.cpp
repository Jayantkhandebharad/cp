#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
    {
        unordered_map<int, int> map;
        for (int i = 0; i < nums2.size(); i++)
        {
            map[nums2[i]] = i;
        }
        vector<int> ans(nums1.size(), -1);
        for (int i = 0; i < nums1.size(); i++)
        {
            for (int j = map[nums1[i]]; j < nums2.size(); j++)
            {
                if (nums2[j] > nums1[i])
                {
                    ans[i] = nums2[j];
                    //cout<<j<<" ";
                    break;
                }
            }
        }
        return ans;
    }
};