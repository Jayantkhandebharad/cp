#include<bits/stdc++.h>
using namespace std;

void solve(){
    int a,b,c,d;
    cin>>a>>b;
    int m1=max(a,b);
    cin>>c>>d;
    int m2 = max(c,d);
    if(m1==m2){
        cout<<"TIE"<<endl;
    }
    else if(m1<m2){
        cout<<"P"<<endl;
    }
    else{
        cout<<"Q"<<endl;
    }
    return;
}


int main(){
    int lm =0;
    cin>>lm;
    for(int i=0;i<lm;i++) solve();

    return 1111;
}			