#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int compress(vector<char> &chars)
    {
        int count;
        int j = 0;
        for (int i = 0; i < chars.size(); i)
        {
            count = 0;
            char x = chars[i];
            while (i < chars.size() and chars[i] == x)
            {
                count++;
                i++;
            }
            if (count == 1)
            {
                chars[j] = x;
                j++;
            }
            else
            {
                chars[j] = x;
                j++;
                string xx = to_string(count);

                for (auto l : xx)
                {
                    chars[j] = l;
                    j++;
                }
            }
        }

        return j;
    }
};
