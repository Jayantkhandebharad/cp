#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> generate(int numRows)
    {
        vector<vector<int>> aa(numRows);
        for (int i = 0; i < numRows; i++)
        {
            aa[i].resize(i + 1);
            aa[i][0] = 1;
            aa[i][i] = 1;
            for (int j = 1; j < i; j++)
            {
                aa[i][j] = aa[i - 1][j - 1] + aa[i - 1][j];
            }
        }
        return aa;
    }
};