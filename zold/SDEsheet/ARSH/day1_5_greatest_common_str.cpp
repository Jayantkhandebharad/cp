/*
1071. Greatest Common Divisor of Strings

For two strings s and t, we say "t divides s" if and only if s = t + ... + t (i.e., t is concatenated with itself one or more times).

Given two strings str1 and str2, return the largest string x such that x divides both str1 and str2.
*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool check(string s, int k, string t)
    {
        int i = 0, j = 0;
        while (i < s.size())
        {
            if (s[i] != t[j % k])
            {
                return false;
            }
            i++;
            j++;
        }
        return true;
    }

    string gcdOfStrings(string str1, string str2)
    {
        int n = str1.size();
        int m = str2.size();
        int k = __gcd(n, m);
        if (check(str1, k, str2) && check(str2, k, str2))
        {
            return str1.substr(0, k);
        }
        return "";
    }
};