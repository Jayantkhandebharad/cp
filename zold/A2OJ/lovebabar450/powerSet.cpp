/*
Power Set 

Given a string S find all possible subsequences of the string in lexicographically-sorted order.
*/

#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void f(int i, int n, string a, string s, vector<string> &ans)
    {
        if (i == n)
        {
            //a.erase(a.begin());
            ans.push_back(a);
            return;
        }
        f(i + 1, n, a, s, ans);
        string q = a;

        f(i + 1, n, a + s[i], s, ans);

        //a.resize(a.size() - 1);
    }

    vector<string> AllPossibleStrings(string s)
    {
        // Code here
        if (s.size() <= 1)
        {
            return {s};
        }
        vector<string> ans;
        string a = "";
        f(0, s.size(), a, s, ans);
        sort(ans.begin(), ans.end());
        ans.erase(ans.begin());
        return ans;
    }
};