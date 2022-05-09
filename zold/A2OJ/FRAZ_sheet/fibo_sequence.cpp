#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int fib(int n)
    {
        if (n == 0)
        {
            return 0;
        }
        if (n == 1)
        {
            return 1;
        }
        int a = 0, b = 1;
        int x = 0;
        for (int i = 2; i <= n; i++)
        {
            x = a + b;
            a = b;
            b = x;
        }
        return x;
    }
};