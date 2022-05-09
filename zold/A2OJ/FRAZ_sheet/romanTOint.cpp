/*

https://leetcode.com/problems/roman-to-integer/
Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.

Symbol       Value
I             1
V             5
X             10
L             50
C             100
D             500
M             1000
For example, 2 is written as II in Roman numeral, just two one's added together. 12 is written as XII, which is simply X + II. The number 27 is written as XXVII, which is XX + V + II.

Roman numerals are usually written largest to smallest from left to right. However, the numeral for four is not IIII. Instead, the number four is written as IV. Because the one is before the five we subtract it making four. The same principle applies to the number nine, which is written as IX. There are six instances where subtraction is used:

I can be placed before V (5) and X (10) to make 4 and 9. 
X can be placed before L (50) and C (100) to make 40 and 90. 
C can be placed before D (500) and M (1000) to make 400 and 900.
Given a roman numeral, convert it to an integer.
*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int value(char a)
    {
        if (a == 'I')
            return 1;
        if (a == 'V')
            return 5;
        if (a == 'X')
            return 10;
        if (a == 'L')
            return 50;
        if (a == 'C')
            return 100;
        if (a == 'D')
            return 500;
        if (a == 'M')
            return 1000;

        return -1;
    }
    int romanToInt(string s)
    {

        int result = 0, prev = 0;
        int n = s.length() - 1;      //set n to length of string
        for (int i = n; i >= 0; i--) //to check it backward until it becomes zero
        {
            if (value(s[i]) >= prev) //if value is greater then prev value add it to result
                result = result + value(s[i]);
            else
                result = result - value(s[i]); //if value is less then prev value subs the value from result
            prev = value(s[i]);                //update prev to current
        }
        return result;
    }
};