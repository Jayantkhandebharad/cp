#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    uint32_t reverseBits(uint32_t n)
    {
        int i = 31;
        int x = 0;
        while (i >= 0)
        {
            if (n & 1 << i)
            {
                x += 1 << (31 - i);
            }
            i--;
        }
        return x;
    }
};