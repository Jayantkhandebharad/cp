/*
Minimum platforms 

Given arrival and departure times of all trains that reach a railway station. Find the minimum number of platforms required for the railway station so that no train is kept waiting.
Consider that all the trains arrive on the same day and leave on the same day. Arrival and departure time can never be the same for a train but we can have arrival time of one train equal to departure time of the other. At any given instance of time, same platform can not be used for both departure of a train and arrival of another train. In such cases, we need different platforms.
*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    //Function to find the minimum number of platforms required at the
    //railway station such that no train waits.

    int findPlatform(int arr[], int dep[], int n)
    {
        // Your code here
        int platforms = 1;
        int maxp = 1;
        int i = 1, j = 0;
        sort(arr, arr + n);
        sort(dep, dep + n);
        while (i < n)
        {
            if (arr[i] <= dep[j])
            {
                platforms++;
                i++;
            }
            else
            {
                platforms--;
                j++;
            }
            if (platforms > maxp)
            {
                maxp = platforms;
            }
        }
        return maxp;
    }
};