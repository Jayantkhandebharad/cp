//https://practice.geeksforgeeks.org/problems/form-coils-in-a-matrix4726/1#
// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    vector<vector<int>> formCoils(int n) {
        
        vector<int> v1;
        int mu = n*4;
        int start1 = 8*n*n+2*n;  // half value and row half
        int i=0;
        int up = 2;
        int right = 2;
        int down = 4;
        int left = 4;
        int dir=0;
        
        while(start1>1 and start1<16*n*n){
            if(dir==0){
                int j = up;
                for(;j>0;j--){
                    v1.push_back(start1);
                    start1 =start1- 4*n;
                }
                dir=1;
                up = up+4;
                
            }
            else if(dir==1){
                int j = right;
                for(;j>0;j--){
                    v1.push_back(start1);
                    start1++;
                }
                dir=2;
                right +=4;
                
            }
            else if(dir ==2){
                int j = down;
                for(;j>0;j--){
                    v1.push_back(start1);
                    start1 =start1+4*n;
                }
                dir=3;
                down = down+4;
            }
            else{
                int j = left;
                for(;j>0;j--){
                    v1.push_back(start1);
                    start1--;
                }
                dir=0;
                left = left+4;
                
            }
            dir = dir%4;
        }
        //v1.push_back(start1);
        vector<int> v2 = v1;
        v1.clear();
        start1 = 8*n*n-2*n+1;
        dir = 2;
        down = 2;
        left = 2;
        up = 4;
        right = 4;
        while(start1>1 and start1<16*n*n){
            if(dir==0){
                int j = up;
                for(;j>0;j--){
                    v1.push_back(start1);
                    start1 =start1- 4*n;
                }
                dir=1;
                up = up+4;
                
            }
            else if(dir==1){
                int j = right;
                for(;j>0;j--){
                    v1.push_back(start1);
                    start1++;
                }
                dir=2;
                right +=4;
                
            }
            else if(dir ==2){
                int j = down;
                for(;j>0;j--){
                    v1.push_back(start1);
                    start1 =start1+4*n;
                }
                
                dir=3;
                down = down+4;
            }
            else{
                int j = left;
                for(;j>0;j--){
                    v1.push_back(start1);
                    start1--;
                }
                dir=0;
                left = left+4;
                
            }
            dir = dir%4;
        }
        
        //v1.push_back(start1);
        vector<vector<int>> ans = {v2,v1};
        return ans;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        
        cin>>n;

        Solution ob;
        vector<vector<int>> ptr = ob.formCoils(n);
        
        for(auto it: ptr)
        {
            for(int i: it)
                cout<<i<<" ";
            cout<<endl;
        }
    }
    return 0;
}  // } Driver Code Ends