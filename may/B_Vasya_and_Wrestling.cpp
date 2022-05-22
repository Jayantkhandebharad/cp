#include<bits/stdc++.h>
using namespace std;

void solve(){
    long long int n;
    cin>>n;
    long long int fl=0,sl=0,sum=0,action=0;
    long long int a;
    vector<long long> f,s;
    for(long long int i=0;i<n;i++)
    {
        cin>>a;
        sum+=a;
        if(a>0){
            action = 1;
            f.push_back(a);
        }
        else{
            action=-1;
            a = -1*a;
            s.push_back(a);
        }
    }    
    if(sum>0){
        cout<<"first";
    }
    else if(sum<0){
        cout<<"second";
    }
    else{
        if(f==s){
            if(action>0){
                cout<<"first";
            }
            else{
                cout<<"second";
            }
        }
        else{
            vector<long long>::iterator p=f.begin();
            vector<long long>::iterator q=s.begin();

            while(p!=f.end() || q!=s.end())
            {
                //cout<<*p<<" "<<*q<<endl;
                if(*p==*q)
                {
                    p++;
                    q++;
                }

                else
                {
                    if(*p>*q)
                        cout<<"first";
                    else
                        cout<<"second";

                    break;
                }

            }
        }
    }
    return;
}


int main(){
    solve();
}			
