/*Given a row wise sorted matrix of size RxC where R and C are always odd, find the median of the matrix.*/
//problem link: https://practice.geeksforgeeks.org/problems/median-in-a-row-wise-sorted-matrix1527/1#

#include <bits/stdc++.h>
using namespace std;

int median(vector<vector<int>> &matrix, int r, int c)
{
    int mn = INT_MAX;
    int mx = INT_MIN;
    for (int i = 0; i < r; i++)
    {
        mn = min(mn, matrix[i][0]);
        mx = max(mx, matrix[i][c - 1]);
    }
    int exact = (r * c + 1) / 2;
    while (mn < mx)
    {
        int mid = (mx + mn) / 2;
        int countlessthanmid = 0;
        for (int i = 0; i < r; i++)
        {
            countlessthanmid += (upper_bound(matrix[i].begin(), matrix[i].end(), mid) - matrix[i].begin());
        }
        if (countlessthanmid < exact)
        {
            mn = mid + 1;
        }
        else
        {
            mx = mid;
        }
    }
    return mn; //or return mx doesn't ma
}