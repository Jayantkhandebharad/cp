#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    double champagneTower(int poured, int query_row, int query_glass)
    {
        vector<double> ans;
        double dx = (double)poured;
        ans.push_back(dx);
        for (int i = 1; i <= query_row; i++)
        {
            vector<double> temp;
            for (int j = 0; j <= ans.size(); j++)
            {
                double x = 0;
                if (j == 0)
                {
                    x = x + max(0.00000, (ans[j] - 1) / 2);
                }
                else if (j == ans.size())
                {
                    x += max(0.00000, (ans[j - 1] - 1) / 2);
                }
                else
                {
                    x += max(0.00000, (ans[j] - 1) / 2);
                    x += max(0.00000, (ans[j - 1] - 1) / 2);
                }

                temp.push_back(x);
            }
            ans = temp;
        }
        double d = ans[query_glass];
        if (d > 1)
        {
            d = 1.0000;
        }
        return d;
    }
};