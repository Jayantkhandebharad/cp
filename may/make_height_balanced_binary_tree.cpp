#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    void dfs(vector<int> &v,int l,int h,vector<int> nums){
        if(l>h){
            return;
        }
        int mid = (l+h)/2;
        v.push_back(nums[mid]);
        dfs(v,l,mid-1,nums);
        dfs(v,mid+1,h,nums);
        return;
    }
    vector<int> sortedArrayToBST(vector<int>& nums) {
        vector<int> v;
        dfs(v,0,nums.size()-1,nums);
        
        
        //below code for level wise making it...
        // queue<pair<int,int>> q;
        // q.push({nums.size()-1,0});
        // while(!q.empty()){
        //     int l=q.front().second;
        //     int h = q.front().first;
        //     int mid = (l+h)/2;
        //     q.pop();
        //     if(l>h){
        //         continue;
        //     }
        //     v.push_back(nums[mid]);
        //     q.push({mid-1,l});
        //     q.push({h,mid+1});
        // }
        return v;
        
    }
};