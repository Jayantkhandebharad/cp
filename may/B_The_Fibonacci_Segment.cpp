//158899237	May/30/2022 22:59UTC+5.5	jayantkhd	365B - The Fibonacci Segment	GNU C++14	Accepted
#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int> v(n);
    if(n<=2){
        cout<<n;
        return;
    }
    cin>>v[0]>>v[1];
    int ans = 2,a=2;
    for(int i=2;i<n;i++){
        cin>>v[i];
        if(v[i]!=v[i-1]+v[i-2]){
            a=2;
            continue;
        }
        a++;
        ans = max(ans,a);
    }
    cout<<ans;
}


int main(){
    solve();
}			