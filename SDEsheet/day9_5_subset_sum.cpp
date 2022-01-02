/*
Subset Sums 

Given a list arr of N integers, print sums of all subsets in it.

Note: Return all the element is increasing order.
*/

#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void f(int i, int sum, vector<int> &arr, int n, vector<int> &x)
    {
        if (i == n)
        {
            x.push_back(sum);
            return;
        }
        f(i + 1, sum, arr, n, x);
        sum += arr[i];
        f(i + 1, sum, arr, n, x);
        sum -= arr[i];
    }

    vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here
        vector<int> x;
        f(0, 0, arr, arr.size(), x);
        return x;
    }
};