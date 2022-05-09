/*
Count total set bits 

You are given a number N. Find the total count of set bits for all numbers from 1 to N(both inclusive).

*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // n: input to count the number of set bits
    //Function to return sum of count of set bits in the integers from 1 to n.
    int maxpowerof2(int x)
    {
        int p = 0;
        while ((1 << p) <= x)
        {
            p++;
        }
        return p - 1;
    }
    int countSetBits(int n)
    {
        // Your logic here
        if (n == 0)
        {
            return 0;
        }
        int x = maxpowerof2(n);

        int beforex = x * (1 << (x - 1));
        //pow(2,x-1)=1<<(x-1)
        int afterx = n - (1 << x) + 1;
        int remain = n - (1 << x);
        return beforex + afterx + countSetBits(remain);
    }
};