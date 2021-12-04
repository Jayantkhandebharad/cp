#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string reverseWords(string s)
    {
        stringstream str(s);
        string word = "";
        string x;

        while (str >> x)
        {
            reverse(x.begin(), x.end());

            word += x + " ";
        }
        word.erase(s.size());
        return word;
    }
};