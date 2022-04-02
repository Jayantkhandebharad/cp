#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int trailingZeroes(int n)
    {
        long long num = 0;
        num += n;
        int count = 0;
        for (int i = 5; (num / i) > 0; i = i * 5)
        {
                        count = count + num / i;
                    
        }

        return count;
    }
};