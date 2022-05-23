//https://leetcode.com/problems/all-paths-from-source-to-target/
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void f(vector<vector<int>>& graph,vector<vector<int>>& ans,vector<int> &v,int ind){
        if(ind == graph.size()-1){
            ans.push_back(v);
            return;
        }
        for(auto i:graph[ind]){
            v.push_back(i);
            f(graph,ans,v,i);
            v.pop_back();
        }
        return;
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<vector<int>> ans;
        vector<int> v;
        v.push_back(0);
        f(graph,ans,v,0);
        return ans;
    }
};