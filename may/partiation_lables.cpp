//https://leetcode.com/problems/partition-labels/
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> partitionLabels(string s) {
        
        vector<int> freq(26,0);
        for(auto i:s){
            freq[i-'a']++;
        }
        int x=-1;
        vector<int> v;
        map<char,int> map;
        for(int i=0;i<s.size();i++){
            map[s[i]]++;
            freq[s[i]-'a']--;
            if(freq[s[i]-'a']==0){
                map.erase(s[i]);
            }
            if(map.size()==0){
                v.push_back(i-x);
                x = i;
            }
        }
        return v;
        
    }
};
