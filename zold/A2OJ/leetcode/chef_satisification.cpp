#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxSatisfaction(vector<int> &sa)
    {
        sort(sa.begin(), sa.end());
        int n = sa.size();
        vector<int> x(n);
        int maxi = 0;
        int tsum = maxi;
        for (int i = 0; i < n; i++)
        {
            maxi += sa[i] * (i + 1);
            tsum += sa[i];
        }

        int lsum = 0;
        for (int i = 0; i < n; i++)
        {
            //cout<<maxi-tsum+sa[i]+lsum<<" ";
            maxi = max(maxi, maxi - (tsum - lsum));

            lsum += sa[i];
        }
        return maxi;
    }
};