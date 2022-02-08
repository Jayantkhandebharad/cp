/*
784. Letter Case Permutation
Medium

2969

138

Add to List

Share
Given a string s, you can transform every letter individually to be lowercase or uppercase to create another string.

Return a list of all possible strings we could create. Return the output in any order.
*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<string> letterCasePermutation(string s)
    {
        vector<int> ch;
        ch.push_back(0);
        vector<string> ans;
        int n = s.size();
        for (int i = 0; i < n; i++)
        {
            if (!isdigit(s[i]))
            {
                s[i] = tolower(s[i]);
                ch.push_back(i);
            }
        }

        for (int i = 0; i < (1 << (ch.size() - 1)); i++)
        {
            string ss = s;
            for (int j = 1; j < ch.size(); j++)
            {

                if ((1 << (j - 1)) & i)
                {
                    ss[ch[j]] = toupper(ss[ch[j]]);
                }
            }
            ans.push_back(ss);
        }
        //sort(ans.begin(),ans.end());
        return ans;
    }
};