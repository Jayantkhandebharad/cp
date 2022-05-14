#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string convertToTitle(int cn) {
        string x="";
        while(cn>26){
            int a = cn%26;
            cn = cn/26;
            
            char l= 'A';
            if(a==0){
                a=26;
                cn--;
            }
            l+= a-1;
            //cout<<a<<" ";
            //cout<<x<<"1 ";
            x = l+x;
            
        }
        int a = cn;
        
        char l= 'A';
        l+= a-1;
            //cout<<x<<"1 ";
        x = l+x;
        return x;
    }
};