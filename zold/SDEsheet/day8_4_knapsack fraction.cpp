/*
Given weights and values of N items, we need to put these items in a knapsack of capacity W to get the maximum total value in the knapsack.
Note: Unlike 0/1 knapsack, you are allowed to break the item.
*/

struct Item
{
    int value;
    int weight;
};

#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool static compare(Item a, Item b)
    {
        return (((double)a.value / (double)a.weight) > ((double)b.value / (double)b.weight));
    }
    //Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        // Your code here
        int i = 0;
        double wa = 0;
        double val = 0;
        sort(arr, arr + n, compare);
        while (i < n)
        {
            if (wa + 1.0 * arr[i].weight <= 1.0 * W)
            {

                val = val + (double)arr[i].value;
                wa = wa + (double)arr[i].weight;
                i++;
            }
            else
            {
                int remain = W - wa;
                val = val + ((double)remain / (double)arr[i].weight) * (double)arr[i].value;
                break;
            }
        }
        return val;
    }
};
