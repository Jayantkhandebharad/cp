#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        string s1 = "";
        for(int i=0;i<s.size();i++){
            if(iswalnum(s[i])){
                s1+=tolower(s[i]);
            }
        }
        int i = 0;
        int j = s1.size()-1;
        //cout<<s1;
        while(i<=j){
            if(s1[i]!=s1[j]){
                //cout<<s1[i]<<" "<<s1[j]<<" ";
                return false;
            }
            j--;
            i++;
        }
        return true;
    }
};