#include <bits/stdc++.h>
using namespace std;

/*
normal method



class Solution {
public:
    int strStr(string haystack, string needle) {
        
        int m = needle.size(), n = haystack.size();
        
        if(n < m) 
            return -1;
        
        if(n == 0) 
            return 0;
        
        for(int i=0; i<n-m+1; i++) {
            if (haystack.substr(i,m) == needle){
                return i;
            }
        }
        
        return -1;
    }
};

*/