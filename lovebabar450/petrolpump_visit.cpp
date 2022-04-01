#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    //Function to find starting point where the truck can start to get through
    //the complete circle without exhausting its petrol in between.
    int tour(petrolPump p[], int n)
    {
        //Your code here
        int j = 0;
        int start = 0;
        int carry = 0;
        int x = 0;
        queue<petrolPump> q;
        for (int i = 0; i < n; i++)
        {
            q.push(p[i]);
        }

        while (j < n and x < 2 * n)
        {
            j++;
            x++;
            carry += q.front().petrol - q.front().distance;
            q.push(q.front());
            q.pop();
            if (carry < 0)
            {
                start = x;
                j = 0;
                carry = 0;
            }
        }
        if (start > n)
        {
            return -1;
        }
        return start;
    }
};
