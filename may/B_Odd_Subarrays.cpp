#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int> v(n);
    int ans = 0;
    cin>>v[0];
    for(int i=1;i<n;i++){
        cin>>v[i];
        
    }
    for(int i=1;i<n;i++){
        if(v[i]<v[i-1]){
            ans++;
            i++;
        }
    }
    cout<<ans<<endl;
    return;
}


int main(){
    int test;
    cin>>test;
    while(test--){
        solve();
    }
    
}			