#include<bits/stdc++.h>
using namespace std;

void solve(){
    
}


int main(){
    solve();
}			
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> map;
        for(int i=0;i<strs.size();i++){
            string x = strs[i];
            sort(x.begin(),x.end());
            map[x].push_back(strs[i]);
        }
        vector<vector<string>> v;
        for(auto i:map){
            v.push_back(i.second);
        }
        return v;
    }
};