

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string removeOuterParentheses(string s)
    {
        stack<char> st;
        string str = "";
        for (auto i : s)
        {
            if (st.size() == 1 and i == ')')
            {
                st.pop();
            }
            else if (st.size() == 0 and i == '(')
            {
                st.push('(');
            }
            else if (i == ')')
            {
                st.pop();
                str += i;
            }
            else
            {
                st.push('(');
                str += "(";
            }
        }
        return str;
    }
};