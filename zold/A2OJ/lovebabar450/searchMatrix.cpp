/*Write an efficient algorithm that searches for a value in an m x n matrix. This matrix has the following properties:
Integers in each row are sorted from left to right.
The first integer of each row is greater than the last integer of the previous row.*/

//problem link: https://leetcode.com/problems/search-a-2d-matrix/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        bool flag = false;
        for (int i = 0; i < matrix.size() - 1; i++)
        {
            if (target < matrix[i + 1][0])
            {
                for (int j = 0; j < matrix[0].size(); j++)
                {
                    if (matrix[i][j] == target)
                    {
                        flag = true;
                        return true;
                    }
                }
                return false;
            }
        }
        for (int i = 0; i < matrix[0].size(); i++)
        {
            if (matrix[matrix.size() - 1][i] == target)
            {
                return true;
            }
        }
        return false;
    }
};