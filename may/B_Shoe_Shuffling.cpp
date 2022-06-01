#include<bits/stdc++.h>
using namespace std;

void solve(){
   int n;
   cin>>n;
   vector<int> v(n);
   map<int,int> mp;
   for(int i=0;i<n;i++){
       cin>>v[i];
       mp[v[i]]++;
   }
   int prev = 1;
   vector<int> temp;
   for(auto i:mp){
       if(i.second<=1){
           cout<<-1<<endl;
           return;
       }
       for(int j=prev+1;j<prev+i.second;j++){
           temp.push_back(j);
       }
       temp.push_back(prev);
       prev = prev+i.second;
   }
   for(int i=0;i<temp.size()-1;i++){
       cout<<temp[i]<<" ";
   }
   cout<<temp[temp.size()-1];
   cout<<endl;
   return;
}


int main(){
int t;
cin>>t;
while(t--) solve();
}			