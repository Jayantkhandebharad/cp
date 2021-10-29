// problem link: https://leetcode.com/problems/group-anagrams/

#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<vector<string>> groupAnagrams(vector<string> &strs)
    {
        unordered_map<string, vector<int>> laa;
        for (int i = 0; i < strs.size(); i++)
        {
            auto s = strs[i];
            sort(s.begin(), s.end());
            laa[s].push_back(i);
        }
        vector<vector<string>> ans;

        for (auto o : laa)
        {
            vector<string> v;
            for (auto x : o.second)
                v.push_back(strs[x]);
            ans.push_back(v);
        }
        return ans;
    }
};