#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int addDigits(int num)
    {
        int sum = 0;
        while (num > 9)
        {
            while (num)
            {
                sum += (num % 10);
                num /= 10;
            }
            num = sum;
            sum = 0;
        }
        return num;
    }
};

class Solution
{
public:
    int addDigits(int num)
    {
        int a = 0;
        while (to_string(num).size() != 1)
        {
            a = 0;
            int n = to_string(num).size();
            cout << to_string(num) << endl;
            for (int i = 0; i < n + 1; i++)
            {
                a += num % 10;
                num = num / 10;
            }
            num = a;
        }
        return num;
    }
};