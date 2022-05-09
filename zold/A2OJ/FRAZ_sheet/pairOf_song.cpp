/*
1010. Pairs of Songs With Total Durations Divisible by 60

You are given a list of songs where the ith song has a duration of time[i] seconds.

Return the number of pairs of songs for which their total duration in seconds is divisible by 60. Formally, we want the number of indices i, j such that i < j with (time[i] + time[j]) % 60 == 0.


*/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int numPairsDivisibleBy60(vector<int> &time)
    {

        int ans = 0;
        int cnt[60] = {0};
        for (int i = 0; i < time.size(); i++)
        {
            cnt[time[i] % 60]++;
        }
        for (int i = 1; i < 30; i++)
            ans += cnt[i] * cnt[60 - i];
        return ans + cnt[0] * (cnt[0] - 1) / 2 + cnt[30] * (cnt[30] - 1) / 2;
    }
};