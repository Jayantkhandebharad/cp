/*
Bit difference between*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Function to find number of bits needed to be flipped to convert A to B
    int countBitsFlip(int a, int b)
    {

        // Your logic here
        a = a ^ b;
        int cnt = 0;
        while (a > 0)
        {
            cnt++;
            a = (a & (a - 1));
        }
        return cnt;
    }
};