/*Given a matrix of size r*c. Traverse the matrix in spiral form.*/

//problem link: https://practice.geeksforgeeks.org/problems/spirally-traversing-a-matrix-1587115621/1#
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int>> matrix, int r, int c)
    {
        // code here
        int left = 0, right = c - 1, up = 0, down = r - 1;
        vector<int> res;
        while (res.size() < (r * c))
        {
            for (int col = left; col <= right; col++)
            {
                res.push_back(matrix[up][col]);
            }
            for (int row = up + 1; row <= down; row++)
            {
                res.push_back(matrix[row][right]);
            }
            if (up != down)
            {
                for (int col = right - 1; col >= left; col--)
                {
                    res.push_back(matrix[down][col]);
                }
            }
            if (left != right)
            {
                for (int row = down - 1; row > up; row--)
                {
                    res.push_back(matrix[row][left]);
                }
            }
            left++;
            right--;
            up++;
            down--;
        }
        return res;
    }
};