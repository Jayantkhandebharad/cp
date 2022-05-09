#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> getRow(int r)
    { //r=rowIndexx
        vector<vector<int>> trg(r + 1, vector<int>(1, 1));
        for (int i = 1; i < r + 1; i++)
        {
            for (int j = 1; j < i; j++)
            {
                trg[i].push_back(trg[i - 1][j - 1] + trg[i - 1][j]);
            }
            trg[i].push_back(1);
        }
        return trg[r];
    }
};