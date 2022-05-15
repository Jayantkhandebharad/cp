#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool anagram(string a,string b){
        unordered_map<char,int> map;
        
        if(a.size()!=b.size()){
            return false;
        }
        for(auto i:a){
            map[i]++;
        }
        for(auto i:b){
            map[i]--;
        }
        for(auto i:map){
            if(i.second>0){
                return false;
            }
            
        }
        return true;
    }
    vector<string> removeAnagrams(vector<string>& words) {
        if(words.size()==1){
            return words;
        }
        int n=words.size();
        int i=0;
        int j=1;
        vector<string> x;
        while(i<n and j<n){
            while(j<n and anagram(words[i],words[j])){
                j++;
            }
            x.push_back(words[i]);
            i=j;
            j++;
        }
        if(n>1 and !anagram(words[n-2],words[n-1])){
            x.push_back(words[i]);
        }
        return x;
    }
};