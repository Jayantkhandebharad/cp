/*
Run Length Encoding 

Given a string, Your task is to  complete the function encode that returns the run length encoded string for the given string.
eg if the input string is “wwwwaaadexxxxxx”, then the function should return “w4a3d1e1x6″.
You are required to complete the function encode that takes only one argument the string which is to be encoded and returns the encoded string.
*/

#include <bits/stdc++.h>
using namespace std;
string encode(string src)
{
    //Your code here
    string a = "";
    int b = 0;
    int c = 0;
    for (int i = 0; i < src.size(); i++)
    {
        if (src[i] == src[b])
        {
            c++;
        }
        else
        {
            a += src[b] + to_string(c);
            c = 1;
            b = i;
        }
    }
    a += src[b] + to_string(c);
    return a;
}