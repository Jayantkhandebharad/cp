#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    
    int largestCombination(vector<int>& c) {
        vector<int> v(32,0);
        for(int i:c){
            for(int j=0;j<32;j++){
                if(1<<j & i){
                    v[j]++;
                }
            }
        }
        int mx=0;
        for(auto i:v){
            mx = max(mx,i);
        }
        return mx;
    }
};