/*Let's call an array arr a mountain if the following properties hold:

arr.length >= 3
There exists some i with 0 < i < arr.length - 1 such that:
arr[0] < arr[1] < ... arr[i-1] < arr[i]
arr[i] > arr[i+1] > ... > arr[arr.length - 1]
Given an integer array arr that is guaranteed to be a mountain, return any i such that arr[0] < arr[1] < ... arr[i - 1] < arr[i] > arr[i + 1] > ... > arr[arr.length - 1].
*/
//problem link: https://leetcode.com/problems/peak-index-in-a-mountain-array/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int peakIndexInMountainArray(vector<int> &arr)
    {
        int low = 0, high = arr.size() - 1;
        int mid;
        while (high >= low)
        {
            mid = (high + low) / 2;
            if (arr[mid] > arr[mid + 1] and arr[mid] > arr[mid - 1])
            {
                return mid;
            }
            else if (arr[mid] < arr[mid + 1])
            {
                low = mid;
            }
            else
            {
                high = mid;
            }
        }
        return mid;
    }
};