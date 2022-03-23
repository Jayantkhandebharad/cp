#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minDominoRotations(vector<int> &tops, vector<int> &bottoms)
    {
        unordered_map<int, int> top;

        int mx = 0;
        int x;
        for (auto i : tops)
        {
            top[i]++;
            if (top[i] > mx)
                mx = top[i];
            x = i;
        }
        for (auto i : bottoms)
        {
            top[i]++;
            if (top[i] > mx)
            {
                mx = top[i];
                x = i;
            }
        }
        int l1 = 0, l2 = 0;
        for (int i = 0; i < tops.size(); i++)
        {
            if (tops[i] != x and bottoms[i] != x)
            {
                return -1;
            }
            if (tops[i] != x)
            {
                l1++;
            }
            if (bottoms[i] != x)
            {
                l2++;
            }
        }
        return min(l2, l1);
    }
};