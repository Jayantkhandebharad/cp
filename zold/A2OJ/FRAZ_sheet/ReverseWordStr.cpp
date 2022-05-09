//problem link: https://leetcode.com/problems/reverse-words-in-a-string/submissions/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string reverseWords(string s)
    {
        string a = "";

        int i = 0, j = 0;
        while (i < s.size() and j < s.size())
        {
            while (i < s.size() && s[i] == ' ')
            {
                i++;
            }
            if (i >= s.size())
                break;
            j = i + 1;
            while (j < s.size() && s[j] != ' ')
            {
                j++;
            }

            string w = s.substr(i, j - i);
            if (a != "" and w != " ")
            {
                a = w + " " + a;
            }
            else if (a == "")
            {
                a = w;
            }
            i = j + 1;
            if (j >= s.size())
                break;
        }

        return a;
    }
};