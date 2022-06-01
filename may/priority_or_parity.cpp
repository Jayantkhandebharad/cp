#include<bits/stdc++.h>
using namespace std;

void solve(){
    long long n,k,c=0,d=0;
    cin>>n>>k;
    if(k==1){
        if(n%2){
            cout<<"ODD"<<endl;
        }
        else{
            cout<<"EVEN"<<endl;
        }
    }
    else if(k%2){
        cout<<"EVEN"<<endl;
    }
    else{
        cout<<"ODD"<<endl;
    }
}


int main(){
    int lm =0;
    cin>>lm;
    for(int i=0;i<lm;i++) solve();

    return 0;
}			