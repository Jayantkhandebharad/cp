//https://codeforces.com/problemset/problem/469/B

#include<bits/stdc++.h>
using namespace std;

int main(){
    int q,p,l,r;
    cin>>p>>q>>l>>r;
    vector<pair<int,int>> pp(p);
    vector<int> t(2010,0);
    
    for(int i=0;i<p;i++){
        int a,b;
        cin>>a>>b;
        for(int j=a;j<=b ;j++){
            t[j]=1;
        }
    }
    int ans=0; vector<bool> arr(r-l+1,false);
    for(int i=0;i<q;i++){
        int a,b;
        cin>>a>>b; 
        for(int j=l;j<=r ;j++){
            for(int k=a; k<=b; k++)
            {
                arr[j-l] = (arr[j-l] | (t[j+k] == 1));
                
            }
            
        }
    }
    for(auto j:arr) ans += j;
    cout<<ans<<endl;
    return 0;
}