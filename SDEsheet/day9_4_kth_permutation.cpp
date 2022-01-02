/*
60. Permutation Sequence

The set [1, 2, 3, ..., n] contains a total of n! unique permutations.

By listing and labeling all of the permutations in order, we get the following sequence for n = 3:

"123"
"132"
"213"
"231"
"312"
"321"
Given n and k, return the kth permutation sequence.

*/

#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string getPermutation(int n, int k)
    {
        int fact = 1;
        vector<int> number;
        for (int i = 1; i < n; i++)
        {
            fact = fact * i;
            number.push_back(i);
        }
        number.push_back(n);
        string ans = "";
        k = k - 1;
        while (1)
        {
            ans += to_string(number[k / fact]);
            number.erase(number.begin() + k / fact);
            if (number.size() == 0)
            {
                break;
            }
            k = k % fact;
            fact = fact / number.size();
        }
        return ans;
    }
};