#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int integerBreak(int n) {
        if(n==2){
            return 1;
        }
        if(n==3){
            return 2;
        }
        int a3 = n%3;
        int a31 = n/3;
        int a4 =0;
        if(a3){
            a31-=1;
            a4=a3;
        }
        long long aa = pow(3,a31);
        if(a4==1){
            aa *= (4);
        }
        else if(a4==2){
            aa*=3*2;
        }
        
        int b2 = n%2;
        int b21 = n/2;
        int b4 = 0;
        if(b2){
            b21--;
            b4 = 1;
        }
        long long bb = pow(2,b21);
        if(b4){
            bb *=3;
        }
        aa = max(aa,bb);
        return aa;
    }
};