#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool palindrome(string s)
    {
        string x = s;
        reverse(s.begin(), s.end());
        if (x == s)
        {
            return true;
        }
        return false;
    }
    bool checkPalindromeFormation(string a, string b)
    {
        int n = a.size();
        if (n == 1 or palindrome(a) or palindrome(b))
        {
            return true;
        }

        string x = "", y = "";
        int c = 0;
        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == b[n - i - 1] and flag)
            {
                c += 2;
            }
            else if (i < n - (c / 2))
            {
                flag = false;
                x += a[i];
                y += b[n - i - 1];
            }
        }

        if (palindrome(x) or palindrome(y))
        {
            return true;
        }

        x = "";
        y = "";
        c = 0;
        flag = true;
        for (int i = 0; i < a.size(); i++)
        {
            if (a[n - i - 1] == b[i] and flag)
            {
                c += 2;
            }
            else if (i < n - (c / 2))
            {
                flag = false;
                x += b[i];
                y += a[n - i - 1];
            }
        }

        if (palindrome(x) or palindrome(y))
        {
            return true;
        }
        return false;
    }
};