#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    static bool cmp(vector<int> &a, vector<int> &b)
    {
        if (a[1] < b[1])
            return true;
        else if (a[1] == b[1])
            return a[0] < b[0];
        return false;
    }
    int maxEvents(vector<vector<int>> &events)
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        // sort according to ending time
        // if ending time matches sort according to start time
        sort(events.begin(), events.end(), cmp);
        int n = events.size();
        // create a set and insert from 1 to  maximum number of days that we can have
        // maximum number will be at events[n-1][1]
        set<int> days;
        for (int i = 1; i <= events[n - 1][1]; i++)
        {
            days.insert(i);
        }
        int cnt = 0;
        for (const auto &event : events)
        {
            int start = event[0];
            int end = event[1];
            auto it = days.lower_bound(start);
            // if the iterator goes out of set or the value becomes greater than end that will be invalid
            if (it == days.end() or *it > end)
                continue;
            // else increment cnt and erase that day
            else
            {
                cnt++;
                days.erase(it);
            }
        }
        return cnt;
    }
};