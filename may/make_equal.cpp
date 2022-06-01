#include<bits/stdc++.h>
using namespace std;

void solve(){
    int a,b,c=0,d=0;
    cin>>a>>b;
    if(a>b){
        c = a-b;
    }
    else {
        d=b-a;
    }
    if(c and c%2){
        cout<<c/2+2<<endl;
    }
    else if(c){
        cout<<c/2<<endl;
    }
    else{
        cout<<d<<endl;
    }
    return;
}


int main(){
    int lm =0;
    cin>>lm;
    for(int i=0;i<lm;i++) solve();

    return 0;
}			