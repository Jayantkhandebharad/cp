#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        long x=0;
        long a=0;
        for(int i=0;i<nums.size();i++){
            a+= i+1-nums[i];
        }
        return a;
    }
};