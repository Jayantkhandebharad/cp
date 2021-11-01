//problem link: https://leetcode.com/problems/simplify-path

#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string simplifyPath(string path)
    {
        stringstream test(path);
        string segment;
        stack<string> a;
        vector<string> seglist;
        if (path == "/../")
            return "/";
        else if (path == "/")
            return "/";

        while (getline(test, segment, '/'))
        {
            seglist.push_back(segment);
        }
        for (int i = 0; i < seglist.size(); i++)
        {
            if (!a.empty() && seglist[i] == "..")
            {
                a.pop();
            }
            else if (seglist[i] != "." && seglist[i] != ".." and seglist[i] != "")
            {
                a.push(seglist[i]);
            }
        }

        if (a.empty())
            return "/";

        string x = "";

        while (!a.empty())
        {
            x = a.top() + x;
            if (a.top() != "")
                x = "/" + x;
            a.pop();
        }
        return x;
    }
};