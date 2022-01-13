#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int profit = 0, pi = 0, buy = prices[0];
        for (int i = 0; i < prices.size(); i++)
        {
            pi = prices[i] - buy;
            if (pi > 0)
            {
                profit += pi;
                pi = 0;
            }
            buy = prices[i];
        }
        return profit;
    }
};