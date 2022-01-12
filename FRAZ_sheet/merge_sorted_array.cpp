#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void merge(vector<int>& num1, int m, vector<int>& num2, int n) {
        for(int i=m-1;i>=0;i--){
            num1[i+n]=num1[i];
            //shifting n place ahead
        }
        
        int i=n,j=0,k=0;
        while(i<m+n && j<n){
            if(num1[i]<num2[j]){
                num1[k]=num1[i];
                i++;
            }
            else{
                num1[k]=num2[j];
                j++;
            }
            k++;
        }
        
        while(j<n){
            num1[k]=num2[j];
            j++;
            k++;
        }
    }
};