#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int x=0;
    int y;
    long long a=0;
    for(int i=0;i<n;i++){
        cin>>y;
        a+=abs(y-x);
        x=y;
    }
    cout<<a+n-1+n<<endl;
    return 0;
}