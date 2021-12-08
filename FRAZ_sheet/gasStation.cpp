#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int canCompleteCircuit(vector<int> &gas, vector<int> &cost)
    {
        int tg = 0, tc = 0, g = 0, c = 0, output = 0;
        if (accumulate(gas.begin(), gas.end(), 0) < accumulate(cost.begin(), cost.end(), 0))
            return -1;
        for (int i = 0; i < gas.size(); i++)
        {
            g = g + gas[i];
            c = c + cost[i];
            if (c > g)
            {
                tg += g;
                tc += c;
                g = 0;
                c = 0;
                output = i + 1;
            }
        }

        if (gas.size() <= output)
        {
            return -1;
        }
        if (tg + g >= tc + c)
        {
            return output;
        }
        return -1;
    }
};