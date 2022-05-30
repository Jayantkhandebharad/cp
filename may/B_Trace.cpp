//158901975	May/30/2022 23:34UTC+5.5	jayantkhd	157B - Trace
#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    
    double pi =3.14159265358979;
    cin>>n;
    double ans = 0;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    if(n%2){
        int r1=0,r2 = v[0];
        for(int i = 0;i<n;i+=2){
            if(i==0){
            //cout<<"x";
                ans += r2*r2;
                continue;
            }
            ans += v[i]*v[i]-v[i-1]*v[i-1];
        }
    }
    else{
        int r1=v[0],r2 = v[1];
        for(int i = 1;i<n;i+=2){
            if(i==0){
            //cout<<"x";
                ans += r2*r2;
                continue;
            }
            ans += v[i]*v[i]-v[i-1]*v[i-1];
        }
    }
    cout<<fixed<<setprecision(10)<<ans*pi;
}


int main(){
    solve();
}			