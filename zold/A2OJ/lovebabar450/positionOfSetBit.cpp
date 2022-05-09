/*
Find position of set bit 
Given a number N having only one ‘1’ and all other ’0’s in its binary representation, find position of the only set bit. If there are 0 or more than 1 set bit the answer should be -1. Position of  set bit '1' should be counted starting with 1 from LSB side in binary representation of the number.
*/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int findPosition(int N)
    {
        // code here
        int cnt = 0;
        int pos = INT_MAX;
        if (N < 0)
            return -1;
        int i = 0;

        while (N)
        {
            if (N & 1)
            {
                cnt++;
                pos = i + 1;
            }
            N = N >> 1;
            i++;
        }
        if (cnt == 1)
        {
            return pos;
        }
        else
        {
            return -1;
        }
    }
};