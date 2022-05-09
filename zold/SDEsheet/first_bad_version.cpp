#include <bits/stdc++.h>
using namespace std;

// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution
{
public:
    int firstBadVersion(int n)
    {
        if (n == 1)
            return 1;
        if (isBadVersion(1))
            return 1;
        if (isBadVersion(2) and n > 1)
            return 2;
        if (isBadVersion(3) and n > 3)
            return 3;

        long long high = n;
        long long low = 1;
        long long x = 2;
        long long mid;
        while (high >= low)
        {
            mid = (low + high) / 2;
            if (isBadVersion(mid))
            {
                x = mid;
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        return x;
    }
};