#include<bits/stdc++.h>
using namespace std;

class Chatbot{
private:
vector<pair<vector<string>,vector<string>>> db;
public:
Chatbot(){
    db= {
        {
            {"do you have name?","what is your name?","your name?"},
            {"I'm chatbot","you can call me chatbot"}
        },
        {
            {"how are you?"},
            {"I'M DOING FINE!, I'M GLAD YOU ASKED","I'M DOING WELL AND YOU?","WHY DO YOU WANT TO KNOW HOW AM I DOING?"}
        },
        {
            {"tell me your favourite song","your favourite song","fev song"},
            {"mere samne vali khidki me..."}
        },
        {
            {"your fev movie","which movie do you link most?","movie you liked most"},
            {"there are many like bahubali, R rajkumar, RRR,etc","if you want specific one then, it's bahubali"}
        },
        {
            {"Bye","bye","by","byeee"},{"bye, but you need to command 'stop'","bye!, but you need to say 'exit'"}
        }
    };
}
void response(string s){
    if(s==""){
        cout<<"sorry I'm not getting it"<<endl;
    }
    string res = "";
    bool flag = false;
    for(int i=0;i<db.size();i++){
        if(find(db[i].first.begin(),db[i].first.end(),s)!=db[i].first.end()){
            flag = true;
            int a = (rand()% (db[i].second.size()));
            res = db[i].second[a];
            break;
        }
    }
    if(!flag){
        cout<<"sorry I am not getting it"<<endl;
        return;
    }
    cout<<res<<endl;
    return;

}

};


int main(){
    string req="";
    Chatbot obj;
    cout<<"Hello there, how can I help you?"<<endl;
    for(int i=0;i<100;i++){
        getline(cin,req);
        for(int i=0;i<req.size();i++){
            req[i] = tolower(req[i]);
        }

        if(req=="stop" or req=="exit"){
            cout<<"It was nice talking to you, Bye!"<<endl;
            return 0;
        }
        obj.response(req);
        cout<<endl;
        
    }
}