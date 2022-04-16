#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> findClosestElements(vector<int> &arr, int k, int x)
    {
        vector<pair<int, int>> close(arr.size());
        int n = arr.size();
        for (int i = 0; i < n; i++)
        {
            close[i] = {abs(arr[i] - x), arr[i]};
        }
        vector<pair<int, int>> xx;
        xx = close;
        sort(xx.begin(), xx.end());
        if (k >= n)
        {
            return arr;
        }
        vector<int> v;

        for (int i = 0; i < n; i++)
        {
            if (k > 0)
            {
                v.push_back(xx[i].second);
                k--;
            }
        }
        sort(v.begin(), v.end());
        return v;
    }
};