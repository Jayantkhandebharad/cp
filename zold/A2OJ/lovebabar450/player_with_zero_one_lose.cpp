//Find Players With Zero or One Losses
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> findWinners(vector<vector<int>> &matches)
    {
        unordered_map<int, int> map;
        for (auto i : matches)
        {
            if (map[i[0]] > -1)
            {
                map[i[0]] = 0;
            }
            if (map[i[1]])
            {
                map[i[1]]--;
            }
            else
            {
                map[i[1]] = -1;
            }
        }
        vector<int> x, y;
        for (auto i : map)
        {
            if (i.second < -1)
            {
                continue;
            }
            else if (i.second == -1)
            {
                y.push_back(i.first);
            }
            else
            {
                x.push_back(i.first);
            }
        }
        sort(x.begin(), x.end());
        sort(y.begin(), y.end());
        return {x, y};
    }
};