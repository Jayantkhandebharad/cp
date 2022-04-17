//59. Spiral Matrix II

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> generateMatrix(int n)
    {
        int val = 1;
        vector<vector<int>> ans(n, vector<int>(n));
        int left = 0;
        int right = n - 1;
        int bottom = n - 1;
        int top = 0;
        while (left <= right and top <= bottom)
        {
            for (int i = left; i <= right; i++)
            {
                ans[top][i] = val;
                val++;
            }
            top++;
            for (int i = top; i <= bottom; i++)
            {
                ans[i][right] = val;
                val++;
            }
            right--;
            for (int i = right; i >= left; i--)
            {
                ans[bottom][i] = val;
                val++;
            }
            bottom--;
            for (int i = bottom; i >= top; i--)
            {
                ans[i][left] = val;
                val++;
            }
            left++;
        }
        return ans;
    }
};