#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int> v(n);
    vector<int> a(n,1);
    map<int,int> mp;
    map<int,int> mp1;
    a[0]=1;
    for(int i=0;i<n;i++){
        cin>>v[i];
        mp1[v[i]]++;
        if(mp[v[i]]){
            a[i] = min(i-mp[i],a[i]);
        }
        else{
            if(i!=0){
                a[i]+=a[i-1];
            }
        }
        mp[v[i]]=i;

    }
    if(mp1[v[0]]==n){
        cout<<n-1<<endl;
        return;
    }
    int aa=0;
    int j=0;
    for(int i=0;i<n;i++){
        //cout<<a[i]<<"a ";
        if(aa<a[i]){
            j=i;
            aa=a[i];
        }
    }    
    int jj = j-aa+1;
    //cout<<jj<<" "<<j<<"a ";
    cout<<2*min(jj,n-j-1)+max(jj,n-j-1);
    cout<<endl;
    return;
}


int main(){
    int lm =0;
    cin>>lm;
    for(int i=0;i<lm;i++) solve();

    return 0;
}			