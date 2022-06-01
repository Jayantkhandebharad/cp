#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int> v(n);
    int odd=0,even = 0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(v[i]%2){
            odd++;
        }
        else{
            even++;
        }
    }
    cout<<min(even,odd)<<endl;
    return;
}


int main(){
    int t;
    cin>>t;
    while(t--) solve();
}			