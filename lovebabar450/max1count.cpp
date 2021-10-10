/* Given a boolean 2D array of n x m dimensions where each row is sorted. 
Find the 0-based index of the first row that has the maximum number of 1's. */

//problem link : https://practice.geeksforgeeks.org/problems/row-with-max-1s0023/1

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int rowWithMax1s(vector<vector<int>> arr, int n, int m)
    {
        int max1 = 0;
        int ro = -1;
        for (int i = 0; i < n; i++)
        {
            int x = upper_bound(arr[i].begin(), arr[i].end(), 1) - lower_bound(arr[i].begin(), arr[i].end(), 1);
            if (x > max1)
            {
                max1 = x;
                ro = i;
            }
        }
        return ro;
    }
};
