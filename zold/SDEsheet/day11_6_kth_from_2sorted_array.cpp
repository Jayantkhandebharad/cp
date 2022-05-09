#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int kthElement(int arr1[], int arr2[], int n, int m, int k)
    {
        int i = 0, j = 0, l = 0;
        bool flag;
        while (l < k and (i < n || j < m))
        {
            if (i < n and j < m and arr1[i] < arr2[j])
            {
                i++;
                l++;
                flag = 1;
            }
            else if (i < n and j < m and arr1[i] > arr2[j])
            {
                j++;
                l++;
                flag = 0;
            }
            else if (i < n)
            {
                i++;
                l++;
                flag = 1;
            }
            else
            {
                j++;
                l++;
                flag = 0;
            }
            if (l == k and flag)
            {
                return arr1[i - 1];
            }
            else if (l == k and !flag)
            {
                return arr2[j - 1];
            }
        }
        return -1;
    }
};