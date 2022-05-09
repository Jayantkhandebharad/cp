#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool checkInclusion(string s1, string s2)
    {
        vector<int> s1hash(26, 0);
        vector<int> s2hash(26, 0);
        int n = s1.size();
        int m = s2.size();
        if (n > m)
            return false;

        for (char c : s1)
            s1hash[c - 'a']++;
        int start = 0;
        for (int i = 0; i < m; i++)
        {
            if (i < n)
                s2hash[s2[i] - 'a']++;
            else
            {
                s2hash[s2[start++] - 'a']--;
                s2hash[s2[i] - 'a']++;
            }
            if (s1hash == s2hash)
                return true;
        }
        return false;
    }
};