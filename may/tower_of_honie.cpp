// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    void solve(int source,int helper,int destination,vector<pair<int,int>> &ans, int N){
        if(N==1){
            ans.push_back({source,destination});
            return;
        }
        solve(source,destination,helper,ans,N-1);
        ans.push_back({source,destination});
        solve(helper,source,destination,ans,N-1);
    }
    vector<int> shiftPile(int N, int n){
        // code here
        vector<pair<int,int>> ans;
        int source = 1;
        int helper = 2;
        int dest = 3;
        solve(source,helper,dest,ans,N);
        pair<int,int> temp = ans[n-1];
        return {temp.first,temp.second};
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, n;
        cin>>N>>n;
        
        Solution ob;
        vector<int> ans = ob.shiftPile(N, n);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}  // } Driver Code Ends