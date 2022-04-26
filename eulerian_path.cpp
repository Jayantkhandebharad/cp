#include <bits/stdc++.h>
using namespace std;
class

    class Solution
{
public:
    int eulerPath(int N, vector<vector<int>> graph)
    {
        // code here
        int odd = 0;
        for (int i = 0; i < graph.size(); i++)
        {
            int cnt = 0;
            for (int j = 0; j < graph[i].size(); j++)
            {
                if (graph[i][j])
                {
                    cnt++;
                }
            }
            if (cnt & 1)
                odd++;
        }
        return (odd == 2 or odd == 0);
    }
};