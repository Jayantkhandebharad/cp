#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<double> v(n);
    double sum=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        sum += v[i];
    }
    double a = sum/n;
    for(int i=0;i<n;i++){
        if(a==v[i]){
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
    return;
}


int main(){
    int test;
    cin>>test;
    while(test--){
        solve();
    }
    return 0;
}			