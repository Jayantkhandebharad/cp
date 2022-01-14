/*
54. Spiral Matrix

Given an m x n matrix, return all elements of the matrix in spiral order.
*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> spiralOrder(vector<vector<int>> &matrix)
    {
        int left = 0, right = matrix[0].size() - 1, top = 0, down = matrix.size() - 1;
        int dir = 0; //0-left to right
                     //1-top to botom  2-right to left    3-bottom to top
        vector<int> ans;
        while (top <= down and right >= left)
        {
            if (dir == 0)
            {
                for (int i = left; i <= right; i++)
                {
                    ans.push_back(matrix[top][i]);
                }
                top++;
                dir++;
            }
            else if (dir == 1)
            {
                for (int i = top; i <= down; i++)
                {
                    ans.push_back(matrix[i][right]);
                }
                right--;
                dir++;
            }
            else if (dir == 2)
            {
                for (int i = right; i >= left; i--)
                {
                    ans.push_back(matrix[down][i]);
                }
                down--;
                dir++;
            }
            else if (dir == 3)
            {
                for (int i = down; i >= top; i--)
                {
                    ans.push_back(matrix[i][left]);
                }
                left++;
                dir++;
            }
            dir = dir % 4;
        }
        return ans;
    }
};