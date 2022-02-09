#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void f(int i, int n, int k, vector<vector<int>> &ans, vector<int> &aa)
    {

        if (aa.size() == k)
        {
            ans.push_back(aa);
            return;
        }
        for (int j = i; j < n + 1; j++)
        {
            aa.push_back(j);
            f(j + 1, n, k, ans, aa);
            aa.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k)
    {
        vector<vector<int>> ans;
        vector<int> aa;
        f(1, n, k, ans, aa);
        return ans;
    }
};
