#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int evalRPN(vector<string> &t)
    {
        stack<int> st;
        int x = 0;
        for (auto i : t)
        {
            if (i == "+" or i == "/" or i == "-" or i == "*")
            {
                if (i == "/")
                {
                    x = st.top();
                    st.pop();
                    int y = st.top();
                    y = y / x;
                    st.pop();
                    st.push(y);
                }
                else if (i == "*")
                {
                    x = st.top();
                    st.pop();
                    int y = st.top();
                    y = y * x;
                    st.pop();
                    st.push(y);
                }
                else if (i == "-")
                {
                    x = st.top();
                    st.pop();
                    int y = st.top();
                    y = y - x;
                    st.pop();
                    st.push(y);
                }
                else
                {
                    x = st.top();
                    st.pop();
                    int y = st.top();
                    y = y + x;
                    st.pop();
                    st.push(y);
                }
            }
            else
            {
                st.push(stoi(i));
            }
        }
        return st.top();
    }
};