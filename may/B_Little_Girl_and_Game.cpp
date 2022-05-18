#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    vector<int> v(26,0);
    for(int i=0;i<s.size();i++){
        v[s[i]-'a']++;    
    }
    int odd=0;
    for(int i=0;i<26;i++){
        if(v[i]&1){
            odd++;
        }
    }
    if(odd&1 or odd==0){
        cout<<"First"<<endl;
    }
    else{
        cout<<"Second"<<endl;
    }
    return 0;
}