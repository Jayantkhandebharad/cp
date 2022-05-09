
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int climbStairs(int n)
    {
        int a = 1;
        int b = 2;
        int c;
        if (n == 1)
        {
            return 1;
        }
        if (n == 2)
        {
            return 2;
        }
        for (int i = 3; i <= n; i++)
        {
            c = a + b;
            a = b;
            b = c;
        }
        return c;
    }

    //     int climbStairs(int n) {

    //         vector<int> a;
    //         a.push_back(0);
    //         a.push_back(1);
    //         a.push_back(2);
    //         a.push_back(3);
    //         for(int i=4;i<=n;i++){
    //             a.push_back(a[i-2]+a[i-1]);
    //         }
    //         return a[n];
    //     }
};