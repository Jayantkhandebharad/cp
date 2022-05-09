#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    unordered_map<int, vector<int>> mymap;
    unordered_map<int, bool> visited;

    void dfs(int i, vector<int> &res)
    {
        visited[i] = true;
        auto v = mymap[i];

        for (auto temp : v)
        {
            if (!visited[temp])
            {
                dfs(temp, res);
            }
        }

        res.push_back(i);
    }
    vector<int> restoreArray(vector<vector<int>> &adjacentPairs)
    {

        vector<int> res;

        for (auto a : adjacentPairs)
        {
            mymap[a[0]].push_back(a[1]);
            mymap[a[1]].push_back(a[0]);
            visited[a[0]] = false;
            visited[a[1]] = false;
        }
        int start = 0;
        for (auto m : mymap)
        {
            if (m.second.size() == 1)
            {
                start = m.first;
                break;
            }
        }
        dfs(start, res);
        reverse(res.begin(), res.end());
        return res;
    }
};