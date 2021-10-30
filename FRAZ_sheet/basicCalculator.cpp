//problem link: https://leetcode.com/problems/basic-calculator-ii/submissions/

#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int calculate(string s)
    {
        stack<int> a;
        int b = 0;
        char prev = '+';
        for (int i = 0; i < s.size(); i++)
        {
            if (isDigit(s[i]) and s[i] != ' ')
            {
                b = b * 10 - '0' + s[i];
            }
            if (!isDigit(s[i]) || i == s.size() - 1)
            {
                if (prev == '+')
                {
                    a.push(b);
                }
                else if (prev == '-')
                {
                    a.push(-b);
                }
                else if (prev == '*')
                {
                    b = a.top() * b;
                    a.pop();
                    a.push(b);
                }
                else if (prev == '/')
                {
                    b = a.top() / b;
                    a.pop();
                    a.push(b);
                }
                b = 0;
                prev = s[i];
            }
        }
        int result = 0;
        while (!a.empty())
        {
            result += a.top();
            a.pop();
        }
        return result;
    }
    bool isDigit(char &x)
    {
        return !(x == '+' || x == '-' || x == '*' || x == '/');
    }
};