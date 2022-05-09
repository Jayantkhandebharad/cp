/*
Count the subarrays having product less than k 
Hard Accuracy: 56.13% Submissions: 5632 Points: 8
Given an array of positive numbers, the task is to find the number of possible contiguous subarrays having product less than a given number k.
*/

#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int countSubArrayProductLessThanK(const vector<int> &a, int n, long long k)
    {
        long long int start = 0, end = 0, count = 0, prod = 1;
        while (end < n)
        {
            prod *= a[end];
            while (start < n and prod >= k)
            {
                prod = prod / a[start];
                start++;
            }
            if (prod < k)
                count += end - start + 1;

            end++;
        }
        return count;
    }
};