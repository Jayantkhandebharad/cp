/*
Print Anagrams Together 

Given an array of strings, return all groups of strings that are anagrams. The groups must be created in order of their appearance in the original array. Look at the sample case for clarification.
*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<string>> Anagrams(vector<string> &string_list)
    {
        //code here
        vector<string> a = string_list;
        set<string> set1;
        vector<vector<string>> ans;
        for (int i = 0; i < string_list.size(); i++)
        {
            sort(a[i].begin(), a[i].end());
            set1.insert(a[i]);
        }
        for (auto j : set1)
        {
            vector<string> l;
            for (int i = 0; i < a.size(); i++)
            {
                if (j == a[i])
                {
                    l.push_back(string_list[i]);
                }
            }
            ans.push_back(l);
        }
        return ans;
    }
};