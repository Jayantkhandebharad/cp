//A robot is located at the top-left corner of a m x n grid (marked 'Start' in the diagram below).
//The robot can only move either down or right at any point in time.
//The robot is trying to reach the bottom-right corner of the grid (marked 'Finish' in the diagram below).
//
//problem link : https://leetcode.com/problems/unique-paths/

#include <bits/stdc++.h>

using namespace std;
class Solution
{
public:
    int uniquePaths(int m, int n)
    {
        int x = m + n - 2;
        int r = n - 1;

        double aa = 1;
        for (int i = 1; i <= r; i++)
        {
            aa = aa * (x - r + i) / i;
        }
        return aa;
    }
};