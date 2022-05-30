#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,m;
    cin>>m>>n;
    map<int,int> mp;
    vector<int> v(n),v1(m);
    for(int i=0;i<m;i++){
        cin>>v1[i];
    }
    sort(v1.begin(),v1.end());
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int i = m-1;
    sort(v.begin(),v.end());
    for(int j=n-1;j>=0;j--){
        if(v[j]>=v1[i]){
            //cout<<"x"
            v[j]=0;
            i--;
        }
    }
    int i1 = 0;
    for(int j=0;j<n;j++){
        if(v[j]>=v1[i1]){
            i1++;
            v[j]=0;
        }
    }
    if(i>=i1){
        cout<<i-i1+1<<endl;
    }
    else{
        if(m>n){
            cout<<m-n<<endl;
        }
        else{
            cout<<0<<endl;
        }
    }
    return;
}


int main(){
    solve();
}			