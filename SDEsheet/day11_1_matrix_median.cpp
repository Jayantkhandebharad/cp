#include <bits/stdc++.h>
using namespace std;
int f(int a, vector<int> &x, int n12) //<=x calculator
{
    int high = x.size() - 1;

    int low = 0;
    while (low <= high)
    {
        int mid = (low + high) >> 1;
        if (x[mid] <= a)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return low;
}

int Solution::findMedian(vector<vector<int>> &A)
{
    int aa = (A.size() * A[0].size()) >> 1;
    int low = 1, high = 1e9;
    while (low <= high)
    {
        int mid = (low + high) >> 1;
        int l = 0;
        for (int i = 0; i < A.size(); i++)
        {
            l += f(mid, A[i], A[i].size());
        }
        if (l <= aa)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return low;
}

/**
 * @input A : 2D integer array 
 * @input n11 : Integer array's ( A ) rows
 * @input n12 : Integer array's ( A ) columns
 * 
 * @Output Integer
 **/