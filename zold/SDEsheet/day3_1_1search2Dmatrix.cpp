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