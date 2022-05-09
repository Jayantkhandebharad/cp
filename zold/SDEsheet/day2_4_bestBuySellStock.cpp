//You are given an array prices where prices[i] is the price of a given stock on the ith day.
//You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.
//Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

//problem link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int profit = 0, y, min1 = prices[0];
        for (int i = 0; i < prices.size(); i++)
        {
            if (profit < prices[i] - min1)
            {
                profit = prices[i] - min1;
            }
            if (min1 > prices[i])
            {
                min1 = prices[i];
            }
        }

        return profit;
    }
};