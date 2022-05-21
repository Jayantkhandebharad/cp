#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    if(m==0){
        cout<<"YES"<<endl;
        return 0;
    }
    vector<int> v(m);
    for(int i=0;i<m;i++){
        cin>>v[i];
    }
    
    
    sort(v.begin(),v.end());
    if(v[0]==1 or v[m-1]==n){
        cout<<"NO";
        return 0;
    }
    for(int i=0;i<m-2;i++){
        
        if(v[i]==v[i+2]-2){
            cout<<"NO";
            return 0;
        }
        
    }
    cout<<"YES";
    return 0;
}