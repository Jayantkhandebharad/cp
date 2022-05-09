
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string a(string s)
    {
        string ss = "";
        for (auto i : s)
        {
            if (i == '+')
            {
                break;
            }
            if (i == '.')
            {
                continue;
            }
            if (i == '@')
            {

                break;
            }
            ss += i;
        }
        bool flag = false;
        for (auto i : s)
        {
            if (flag)
            {
                ss += i;
            }
            else if (i == '@')
            {
                ss += '@';
                flag = true;
            }
        }
        return ss;
    }
    int numUniqueEmails(vector<string> &emails)
    {
        set<string> set1;
        for (auto i : emails)
        {
            string t = a(i);
            //cout<<t<<endl;
            set1.insert(t);
        }
        return set1.size();
    }
};