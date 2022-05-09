
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int reverse(int x)
    {
        int rev = 0, rem;
        while (x != 0)
        {
            //this while loop manage both positive and negative numbers.
            rem = x % 10;
            if (rev > (INT_MAX / 10) || rev < (INT_MIN) / 10)
            {
                //this condition manage signed integer overflow error
                //INT_MAX is +2147483647 = 2^31 -1
                //INT_MIN is -2124783647 = -2^31

                //we have compared rev 'reverse' with INT_MAX/10 because in next step it will
                //it will multiply the reversed pard by 10 so in order to add new unit place digit
                return 0;
            }
            rev = (rev * 10) + rem;
            x = x / 10;
        }
        return rev;
    }
};