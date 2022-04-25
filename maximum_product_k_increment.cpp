#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maximumProduct(vector<int> &nums, int k)
    {

        priority_queue<int, vector<int>, greater<int>> pq;
        for (auto &num : nums)
            pq.push(num);

        while (k--)
        {
            int top = pq.top();
            pq.pop();
            pq.push(top + 1);
        }

        long long res(1), mod(1e9 + 7);
        while (!pq.empty())
        {
            res = (res * pq.top()) % mod;
            pq.pop();
        }
        return (int)res;
    }
};