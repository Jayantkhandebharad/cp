#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    bool isHappy(int n) {
        unordered_map<int,int> map;
        while(n!=1){
            if(map[n]){
                return false;
            }
            map[n]++;
            string s = to_string(n);
            int a=0;
            for(auto i:s){
                a += pow(i-'0',2);
            }
            if(a==1){
                return 1;
            }
            n=a;
        }
        return 1;
    }
};