//problem link:https://leetcode.com/problems/integer-to-roman/

#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    string intToRoman(int num)
    {
        string i = "";
        int a = num / 1000;
        for (int j = 0; j < a; j++)
        {
            i += "M";
        }
        num = num % 1000;

        a = num / 900;
        for (int j = 0; j < a; j++)
        {
            i += "CM";
        }
        num = num % 900;

        a = num / 500;
        for (int j = 0; j < a; j++)
        {
            i += "D";
        }
        num = num % 500;

        a = num / 400;
        for (int j = 0; j < a; j++)
        {
            i += "CD";
        }
        num = num % 400;

        a = num / 100;
        for (int j = 0; j < a; j++)
        {
            i += "C";
        }
        num = num % 100;

        a = num / 90;
        for (int j = 0; j < a; j++)
        {
            i += "XC";
        }
        num = num % 90;

        a = num / 50;
        for (int j = 0; j < a; j++)
        {
            i += "L";
        }
        num = num % 50;

        a = num / 40;
        for (int j = 0; j < a; j++)
        {
            i += "XL";
        }
        num = num % 40;

        a = num / 10;
        for (int j = 0; j < a; j++)
        {
            i += "X";
        }
        num = num % 10;

        a = num / 10;
        for (int j = 0; j < a; j++)
        {
            i += "X";
        }
        num = num % 10;

        a = num / 9;
        for (int j = 0; j < a; j++)
        {
            i += "IX";
        }
        num = num % 9;

        a = num / 5;
        for (int j = 0; j < a; j++)
        {
            i += "V";
        }
        num = num % 5;

        a = num / 4;
        for (int j = 0; j < a; j++)
        {
            i += "IV";
        }
        num = num % 4;

        a = num / 1;
        for (int j = 0; j < a; j++)
        {
            i += "I";
        }
        num = num % 1;

        return i;
    }
};