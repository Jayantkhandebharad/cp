#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minDeletions(string s)
    {
        unordered_map<char, int> a;
        for (auto i : s)
        {
            a[i]++;
        }
        int count = 0;
        vector<int> w;
        set<int> st;
        for (auto i : a)
        {

            if (st.find(i.second) == st.end())
            {
                st.insert(i.second);
            }
            else
            {
                while (st.find(i.second) != st.end())
                {
                    i.second--;
                    count++;
                }
                if (i.second != 0)
                    st.insert(i.second);
            }
        }
        return count;
    }
};