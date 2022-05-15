#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxConsecutive(int bottom, int top, vector<int>& special) {
        int mx=0,sum=0;
        top++;
        bottom--;
        sort(special.begin(),special.end());
        for(auto i:special){
            mx = max(i-bottom,mx);
            bottom = i;
        }
        mx = max(top-bottom,mx);
        return mx-1;
    }
};