#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    unordered_map<int,int> home,away;
    vector<pair<int,int>> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i].first>>v[i].second;
        home[v[i].first]++;
        away[v[i].second]++;
    }
    for(int i=0;i<n;++i){
        cout<<(n-1)+home[v[i].second]<<" "<<2*(n-1)-((n-1)+home[v[i].second])<<endl;
    }
}


// 3
// 1 2
// 2 1
// 1 3