#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> dailyTemperatures(vector<int> &tmp)
    {
        int n = tmp.size();
        vector<int> right(n, 0);
        stack<pair<int, int>> s;
        //s.push({tmp[n-1],n-1});
        for (int i = n - 1; i >= 0; i--)
        {
            while (!s.empty() and s.top().first <= tmp[i])
            {
                s.pop();
            }
            if (!s.empty() and s.top().first > tmp[i])
            {
                right[i] = s.top().second - i;
            }
            s.push({tmp[i], i});
        }
        return right;
    }
};