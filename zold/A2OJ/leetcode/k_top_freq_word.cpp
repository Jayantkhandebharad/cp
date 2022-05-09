#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<string> topKFrequent(vector<string> &words, int k)
    {
        unordered_map<string, int> w;
        set<string> s;

        for (auto i : words)
        {
            w[i]++;
            s.insert(i);
        }
        set<int> count;
        int max1 = 0;
        for (auto i : s)
        {
            if (max1 < w[i])
            {
                max1 = w[i];
            }
            count.insert(w[i]);
        }
        vector<string> ans, x;

        while (ans.size() < k)
        {
            for (auto i : s)
            {
                if (w[i] == max1)
                {
                    x.push_back(i);
                }
            }
            count.erase(max1);
            max1 = 0;
            for (auto i : count)
            {
                if (max1 < i)
                {
                    max1 = i;
                }
            }

            sort(x.begin(), x.end());
            for (int i = 0; i < x.size() and ans.size() < k; i++)
            {
                ans.push_back(x[i]);
            }
            x.clear();
        }
        return ans;
    }
};