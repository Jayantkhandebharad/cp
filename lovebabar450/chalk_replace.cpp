//1894. Find the Student that Will Replace the Chalk

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int chalkReplacer(vector<int> &chalk, int k)
    {
        long long count = 0;
        for (auto i : chalk)
        {
            count += i;
        }
        if (count > k)
        {
            for (int i = 0; i < chalk.size(); i++)
            {
                if (chalk[i] > k)
                {
                    return i;
                }
                k = k - chalk[i];
            }
        }
        k = k % count;
        for (int i = 0; i < chalk.size(); i++)
        {
            if (chalk[i] > k)
            {
                return i;
            }
            k = k - chalk[i];
        }
        return 0;
    }
};