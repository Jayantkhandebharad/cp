#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool canMakeArithmeticProgression(vector<int> &a)
    {
        //vector<int> a = arr;

        if (a.size() < 3)
        {
            return true;
        }
        sort(a.begin(), a.end());
        int x = 0;
        int y = 0;
        int l = 0;
        for (auto i : a)
        {
            if (x < 2)
            {
                y = i - y;
                l = i;
                x++;
                //cout<<y<<" ";
            }
            else
            {

                if (i - l != y)
                {
                    return false;
                }
                else
                {
                    l = i;
                }
            }
        }
        return true;
    }
};