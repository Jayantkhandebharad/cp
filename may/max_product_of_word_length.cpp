//https://leetcode.com/problems/maximum-product-of-word-lengths/
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
	// function to get the decimal value of respective string
    int getDecimalValue(string s) {
        int num = 0;
        for (char c : s) {
            num |= 1 << (c - 'a');
        }
        // cout << num << endl;
        return num;
    }
    
    int maxProduct(vector<string>& words) {
        int n = words.size();
        
		// if size of array is one then we can't take product hence result = 0
        if (n<2) return 0;
        
		// array to store the value of string converted decimal value
        vector<int> arr(n);
        
        for (int i = 0; i<n; i++) {
            arr[i] = getDecimalValue(words[i]);
        }
        
		// the two for loops to check for the maximum product
        int res = 0;
        for (int i = 0; i<n; i++) {
            for (int j = i+1; j<n; j++) {
			
				// when arr[i]&arr[j] == 0 then they don't contain same lettter
				// hence multiplying their length
                if ((arr[i]&arr[j]) == 0) res = max(res, (int)words[i].size() * (int)words[j].size());
            }
        }
        
        return res;
    }
};

// class Solution {
// public:
//     int maxProduct(vector<string>& words) {
//         int n=words.size();
//         vector<vector<int>> v(words.size(),vector<int> (26,0));
//         for(int i=0;i<n;i++){
//             for(int j=0;j<words[i].size();j++){
//                 v[i][words[i][j]-int('a')]++;                
//             }
//         }

//         int ans = 0;
//         for(int i=0;i<n;i++){
//             for(int k=i+1;k<n;k++){
//                 int a=0;
//                 for(int j=0;j<26;j++){
//                     if(v[i][j] and v[k][j]){
//                         a++;
//                     }
//                 }
//                 if(a){
//                     continue;
//                 }
//                 ans = max(ans,int(words[i].size()*words[k].size()));
//             }
//         }
//         return ans;
//     }
// };