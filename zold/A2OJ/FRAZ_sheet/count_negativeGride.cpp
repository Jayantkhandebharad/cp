/*Given a m x n matrix grid which is sorted in non-increasing order both row-wise and column-wise, return the number of negative numbers in grid.*/
//problem link: https://leetcode.com/problems/count-negative-numbers-in-a-sorted-matrix/

#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int countNegatives(vector<vector<int>> &grid)
    {
        int n = grid.size();
        int m = grid[0].size();
        int count = 0;
        int i = m - 1;
        int j = 0;
        while (j < n and -1 <= i)
        {
            while (i >= 0 and grid[j][i] < 0)
            {
                i--;
            }

            count += m - i - 1;
            j++;
        }

        return count;
    }
};