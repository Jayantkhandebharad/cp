/*
997. Find the Town Judge

In a town, there are n people labeled from 1 to n. There is a rumor that one of these people is secretly the town judge.

If the town judge exists, then:

The town judge trusts nobody.
Everybody (except for the town judge) trusts the town judge.
There is exactly one person that satisfies properties 1 and 2.
You are given an array trust where trust[i] = [ai, bi] representing that the person labeled ai trusts the person labeled bi.

Return the label of the town judge if the town judge exists and can be identified, or return -1 otherwise.
*/

#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int findJudge(int n, vector<vector<int>> &trust)
    {

        if (trust.size() == 0 && n == 1)
            return 1;
        unordered_map<int, int> trusts;
        unordered_map<int, int> trustmap;
        for (auto pair : trust)
        {
            trusts[pair[1]]++;
            trustmap[pair[0]] = pair[1];
        }
        for (auto pair : trusts)
        {
            if (pair.second == n - 1)
            {
                unordered_map<int, int>::iterator itr = trustmap.find(pair.first);
                if (itr == trustmap.end())
                    return pair.first;
                else if (trustmap[pair.first] > 0)
                    return -1;
                else
                    return pair.first;
            }
        }
        return -1;
    }
};