#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,t;
    cin>>n>>t;
    vector<int> v(n);
    int mx=0;
    int j=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        while(t-v[i]<0 and j<n){
            t+=v[j];
            j++;
            
        }
        
        t -= v[i];
        
        mx = max(i-j+1,mx);
    }
    cout<<mx<<endl;
    return 0;
}