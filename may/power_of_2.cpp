#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPowerOfTwo(int n) {
        int count;
        count = __builtin_popcount(n);
        if(count==1 and n>0){
            return true;
        }
        return false;
    }
};