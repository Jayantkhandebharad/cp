#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    vector<int> v(t);
    cin>>v[0];
    int x=0;
    for(int i=1;i<t;i++){
        cin>>v[i];
        if(v[i]<v[i-1] and !x){
            x = i;
        }
    }
    vector<int> aa= v;
    sort(aa.begin(),aa.end());
    if(aa==v){
        cout<<0<<endl;
        return 0;
    }
    int j=0;
    vector<int> b;
    for(int i=x;i<t;i++){
        b.push_back(v[i]);
    }
    for(int i=0;i<x;i++){
        b.push_back(v[i]);
    }
    if(b==aa){
        cout<<t-x;
    }
    else{
        cout<<-1;
    }
    return 0;
}