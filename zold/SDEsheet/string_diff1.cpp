/*
389. Find the Difference
Easy

2232

361

Add to List

Share
You are given two strings s and t.

String t is generated by random shuffling string s and then add one more letter at a random position.

Return the letter that was added to t.
*/
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    char findTheDifference(string s, string t)
    {
        int S = 0; // count of ASCII of s
        int T = 0; // count of ASCII of t

        // count all ASCII values of string s
        for (char ch : s)
            S += ch;

        // count all ASCII values of string t
        for (char ch : t)
            T += ch;

        // At the end
        // difference of count of T-S will be our answer
        return T - S;
    }
};

// class Solution {
// public:
//     char findTheDifference(string s, string t) {
//         unordered_map<char,int> map;
//         int n = s.size();
//         char ans;
//         for(int i=0;i<n;i++){
//             map[s[i]]++;
//             map[t[i]]--;

//         }
//         map[t[n]]--;
//         for(int i=0;i<n+1;i++){
//             if(map[t[i]]==-1){
//                 return t[i];
//             }
//         }
//         return 'a';
//     }
// };