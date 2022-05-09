#include<bits/stdc++.h>
using namespace std;

/*
f1 = x
f2 = y
f3 = f2-f1
f4 = f3-f2 = f2-f1-f2 = -f1
f5 = f4-f3 = -f1-f2+f1 = -f2
f6 = f5-f4 = -f2-(-f1) = f1-f2

f7 = f1-f2-(-f2) = f1
f8 = f1-f1+f2 = f2
f9 = f2-f1
...
*/
int main(){
    long long x,y,n;
    cin>>x>>y>>n;
    n = n%6;
    
    long long a;
    if(n==0){
        a = x-y;
    }
    else if(n==1){
        a= x;
    }
    else if(n==2){
        a=y;
    }
    else if(n==3){
        a=y-x;
    }
    else if(n==4){
        a = -1*x;
    }
    else if(n==5){
        a= -1*y;
    }
    
    a = (a%1000000007+1000000007)%1000000007;
    cout<<a<<endl;
    return 0;
}