#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool static cmp(vector<int> a, vector<int> b)
    {
        if (abs(a[0] - a[1]) > abs(b[0] - b[1]))
        {
            return true;
        }
        return false;
    }
    int twoCitySchedCost(vector<vector<int>> &costs)
    {
        sort(costs.begin(), costs.end(), cmp);
        int a = 0, aa = 0, b = 0, bb = 0;
        for (auto i : costs)
        {
            if (i[0] < i[1] and a < costs.size() / 2)
            {
                a++;
                aa += i[0];
            }
            else if (b < costs.size() / 2)
            {
                b++;
                bb += i[1];
            }
            else
            {
                a++;
                aa += i[0];
            }
        }
        return aa + bb;
    }
};