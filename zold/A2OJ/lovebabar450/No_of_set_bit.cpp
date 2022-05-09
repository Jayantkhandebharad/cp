/*
Number of 1 Bits 

Given a positive integer N, print count of set bits in it. 
*/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int setBits(int N)
    {
        // Write Your Code here
        int cnt = 0;
        while (N > 0)
        {
            cnt++;
            N = N & (N - 1);
        }
        return cnt;
    }
};