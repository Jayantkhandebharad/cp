/*
2165. Smallest Value of the Rearranged Number
*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    long long smallestNumber(long long num)
    {
        if (num > 0)
        {
            string s = to_string(num);
            sort(s.begin(), s.end());

            for (int i = 0; i < s.size(); i++)
                if (s[i] != '0')
                {
                    swap(s[i], s[0]);
                    break;
                }
            return stoll(s);
        }
        else
        {
            string s = to_string(num);

            sort(s.begin() + 1, s.end());

            reverse(s.begin() + 1, s.end());

            return stoll(s);
        }
    }
};