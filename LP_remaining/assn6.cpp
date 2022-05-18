#include<bits/stdc++.h>
using namespace std;

class Helth{
    private:
    vector<string> db;
    vector<pair<int,string>> db2;
    public:
    Helth(){
        db = {
            "do you have cough?",
            "do you have running nouse?",
            "do you have fever?",
            "are you feeling cold?",
            "are you feeling like sweeting?",
            "is your throut feeling like sour?",
            "are you feeling tired without doing anything?",
            "do you have headach?",
            "do you feel itchy in neck area?"
        };
        db2 = {
            {75,"Extreme"},
            {50,"severe"},
            {30,"mild"}
        };
    }
    void check(){
        int par = 0;
        for(int i=0;i<db.size();i++){
            cout<<db[i]<<"(yes/no)"<<endl;
            string s;
            cin>>s;
            if(s=="yes"){
                cout<<"please rate it on scale of 1 to 10: "<<endl;
                int aa;
                cin>>aa;
                if(aa>10 or aa<0){
                    cout<<"you have given wrong value, please try again...otherwise program will stop"<<endl;
                    cin>>aa;
                    if(aa>10 or aa<0){
                        return;
                    }
                }
                par += aa;
            }
        }
        bool flag=true;
        for(auto i:db2){
            if(par>=i.first){
                cout<<"your covid is seems in "<<i.second<<" condition : "<<endl;
                flag = false;
                break;
            }
        }
        if(flag){
            cout<<"seems like you don't have covid "<<endl;
        }
        return;
        
    }


};

int main(){
Helth obj;
cout<<"Welcome to Covid-19 expert system"<<endl;
obj.check();
return 0;
}