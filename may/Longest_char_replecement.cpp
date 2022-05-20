//https://leetcode.com/problems/longest-repeating-character-replacement/submissions/
#include <bits/stdc++.h> 
using namespace std;

class Solution {
public:
    int characterReplacement(string s, int k) {
        int maxi=0,ans = 0;
        int j=0;
        map<char,int> mpp;
        for(int i=0;i<s.size();i++){
            mpp[s[i]]++;
            maxi = max(maxi,mpp[s[i]]);
            while((i-j-maxi+1)>k){
                mpp[s[j]]--;
                int count = 0;
                for(auto t:mpp){
                    count = max(count,t.second);
                }
                maxi = count;
                j++;
            }
            ans = max(ans,i-j+1);
        }
        return ans;
    }
};