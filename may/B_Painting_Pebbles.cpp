#include<bits/stdc++.h>
using namespace std;

void solve(){
        int n,k;
        cin>>n>>k;
        vector<int> v(n);
        int mx=0,mn=INT_MAX;
        for(int i=0;i<n;i++){
            cin>>v[i];
            mn = min(v[i],mn);
            mx = max(v[i],mx);
        }
        if(mx-mn>k){
            cout<<"NO";
            return;
        }
        cout<<"YES"<<endl;
        for(int i=0;i<n;i++){
            int aa=1;
            int a=0;
            for(int j=0;j<v[i] and a<v[i];j++){
                for(int k=0;k<mn+1 and a<v[i];k++){
                    cout<<aa<<" ";
                    a++;
                }
                while(a<v[i]){
                    aa++;
                    cout<<aa<<" ";
                    a++;
                }
            }
            cout<<endl;
        }
}


int main(){
    solve();
}			