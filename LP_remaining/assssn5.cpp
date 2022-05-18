#include<bits/stdc++.h>
using namespace std;


class ChatBot
{
    private:
        vector<pair<vector<string>, vector<string>>> database;
    public:

        ChatBot()
        {
            database =
            {
                {
                    {"hi", "hello"},
                    {"HI THERE!", "HOW ARE YOU?", "HI!"}
                },
                {
                    {"what is your name?"},
                    {"MY NAME IS CHATTERBOT2.", "YOU CAN CALL ME CHATTERBOT2.",
                        "WHY DO YOU WANT TO KNOW MY NAME?"}
                },
                {
                    {"how are you?"},
                    {"I'M DOING FINE!", "I'M DOING WELL AND YOU?",
                        "WHY DO YOU WANT TO KNOW HOW AM I DOING?"}
                },
                {
                    {"who are you?"},
                    {"I'M AN A.I PROGRAM.", "I THINK THAT YOU KNOW WHO I'M.",
                        "WHY ARE YOU ASKING?"}
                },
                {
                    {"are you intelligent?"},
                    {"YES,OFCORSE.", "WHAT DO YOU THINK?", "ACTUALY,I'M VERY INTELLIGENT!"}
                },
                {
                    {"are you real?"},
                    {"DOES THAT QUESTION REALLY MATERS TO YOU?", "WHAT DO YOU MEAN BY THAT?", 
                        "I'M AS REAL AS I CAN BE."}
                },
                {
                    {"bye", "by", "byee"},
                    {"IT WAS NICE TALKING TO YOU USER, SEE YOU NEXTTIME!"}
                }
            };
        }

        void response(string input)
        {
            if(input == "")
                cout << "\n\t\tChatBot : \t Sorry, I'm not getting...";

            string res = "";
            bool flag = false;

            for(int i=0; i<database.size(); i++)
            {
                if(find(database[i].first.begin(), database[i].first.end(), input) != database[i].first.end())
                {
                    flag = true;

                    int a = (rand()% (database[i].second.size()));

                    res = database[i].second[a];
                }
            }

            if(!flag)
                cout << "\n\t\tChatBot : \t Sorry, I'm not getting...";

            cout << "\n\t\tChatBot : \t" << res << "\n";
        }   
};

int main()
{
    string req = "";
    
    while(true)
    {
        cout << "\n\t Enter Your Input : ";
        getline(cin, req);

        for(int i=0; i<req.length(); i++)
            req[i] = tolower(req[i]);

        if(req == "stop")
        {
            cout << "\n\t\t\tIT WAS NICE TALKING TO YOU USER, SEE YOU NEXTTIME!\n\n";
            return -1;
        }

        ChatBot obj;

        obj.response(req);
    }

    return 0;
}