#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int titleToNumber(string s)
    {
        unordered_map<char, int> map;
        int j = 1;
        for (auto i = 'A'; i <= 'Z'; i++)
        {
            map[i] = j;
            j++;
        }
        int x = 0;
        for (auto i : s)
        {
            x = x * 26 + map[i];
        }
        return x;
    }
};