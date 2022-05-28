#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int> a,pair<int,int> b){
    if(a.second!=b.second)
        return a.second<b.second;
    return a.first<b.first;
}
void solve(){
    int n;
    cin>>n;
    vector<int> v(n);
    map<int,int> mp;
    int mx_freq=0;
    vector<pair<int,int>> vv(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
        mp[v[i]]++;
        mx_freq = max(mx_freq,mp[v[i]]);
        //int tttt = mp[v[i]];
        //vv[i] = {v[i],tttt};
    }
    sort(vv.begin(),vv.end(),cmp);
    if(n%2){
        cout<<"NO"<<endl;
        return;
    }
    
    

    sort(v.begin(),v.end());
    int j=0;
    bool flag = true;
    vector<int> a(n);
    int x = 0;
    for(int i=0;i<n;i+=2){
        a[i]=v[j];
        j++;
    }
    for(int i=1;i<n;i+=2){
        a[i]=v[j];
        j++;
    }
    for(int i=0;i<n-1;i++){
        if(a[i]==a[i+1]){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

    cout<<endl;
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