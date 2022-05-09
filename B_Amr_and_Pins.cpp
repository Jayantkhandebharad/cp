#include<bits/stdc++.h>
using namespace std;

int main(){
    int r,x,y,x1,y1;
    cin>>r>>x>>y>>x1>>y1;
    double a = sqrt(pow(abs(x-x1),2.0)+pow(abs(y-y1),2.0));
    
        cout<<(int)(ceil(a/(2*r))) <<endl;
    
    return 0;
}