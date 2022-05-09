/*
399. Evaluate Division

You are given an array of variable pairs equations and an array of real numbers values, where equations[i] = [Ai, Bi] and values[i] represent the equation Ai / Bi = values[i]. Each Ai or Bi is a string that represents a single variable.

You are also given some queries, where queries[j] = [Cj, Dj] represents the jth query where you must find the answer for Cj / Dj = ?.

Return the answers to all queries. If a single answer cannot be determined, return -1.0.

Note: The input is always valid. You may assume that evaluating the queries will not result in division by zero and that there is no contradiction.


*/
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    //this is the dfs function go checkout the main function below this
    void dfs(map<string, vector<pair<string, double>>> &graph, set<string> &vis, string s, string d, double &ans, double temp)
    {
        if (vis.find(s) != vis.end())
            return;
        else
        {
            vis.insert(s);
            if (s == d)
            {
                ans = temp;
                return;
            }
            else
            {
                for (auto i : graph[s])
                {
                    dfs(graph, vis, i.first, d, ans, temp * i.second);
                }
            }
        }
    }

    vector<double> calcEquation(vector<vector<string>> &equations, vector<double> &values, vector<vector<string>> &queries)
    {
        map<string, vector<pair<string, double>>> graph;

        for (int i = 0; i < equations.size(); i++)
        {
            graph[equations[i][0]].push_back({equations[i][1], values[i]});     //storing value for s->d
            graph[equations[i][1]].push_back({equations[i][0], 1 / values[i]}); //storing reciprocal value for d->s
        }
        vector<double> res;
        for (int i = 0; i < queries.size(); i++)
        {
            string s = queries[i][0]; //source
            string d = queries[i][1]; //destination
            set<string> vis;
            double ans = -1.0;
            if (graph.find(s) != graph.end()) //if source is present in the graph then dfs call
            {
                dfs(graph, vis, s, d, ans, 1.0);
            }
            res.push_back(ans);
        }
        return res;
    }
};