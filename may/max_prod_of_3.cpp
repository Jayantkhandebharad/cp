//Maximum Product of Three Numbers
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size()-1;
        return max(nums[n]*nums[n-1]*nums[n-2],nums[n]*nums[0]*nums[1]);
    }
};