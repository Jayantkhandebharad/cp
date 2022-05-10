#include<bits/stdc++.h>
using namespace std;


int main(){
    string x,y;
    cin>>x>>y;
    map<char,int> m1,m2;
    for(auto i:x){
        m1[i]++;
    }
    for(auto i:y){
        m2[i]++;
        if(m1[i]==0){
            m1[i]=0;
        }
    }

    bool flag=true;
    for(auto i:m1){
        if(i.second<m2[i.first]){
            cout<<"need tree"<<endl;
            return 0;
        }
        else if(i.second>m2[i.first]){
            flag = false;
        }
    }
    int pos = 0;
    bool f2=true;
    for(auto i:x){
        if(i==y[pos]){
            pos++;
        }
        if(pos==y.size()){
            break;
        }
    }
    if(pos!=y.size()){
        f2 = false;
    }
    if(!flag and !f2){
        cout<<"both"<<endl;
    }
    else if(!f2){
        cout<<"array"<<endl;
    }
    else{
        cout<<"automaton"<<endl;
    }
}