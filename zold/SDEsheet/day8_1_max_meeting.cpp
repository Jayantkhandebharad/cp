/*
N meetings in one room

There is one meeting room in a firm. There are N meetings in the form of (start[i], end[i]) where start[i] is start time of meeting i and end[i] is finish time of meeting i.
What is the maximum number of meetings that can be accommodated in the meeting room when only one meeting can be held in the meeting room at a particular time?
*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    int maxMeetings(int start[], int end[], int n)
    {
        // Your code here
        unordered_map<int, int> endd;
        for (int i = 0; i < n; i++)
        {
            if (endd.find(end[i]) != endd.end())
            {
                endd[end[i]] = max(endd[end[i]], start[i]);
            }
            else
            {
                endd[end[i]] = start[i];
            }
        }

        sort(end, end + n);
        int metting = 1;
        int x = end[0];
        for (int i = 0; i < n; i++)
        {
            if (endd[end[i]] > x)
            {
                metting++;
                x = end[i];
            }
        }
        return metting;
    }
};

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int start[n], end[n];
        for (int i = 0; i < n; i++)
            cin >> start[i];
        for (int i = 0; i < n; i++)
            cin >> end[i];
        Solution ob;
        int ans = ob.maxMeetings(start, end, n);
        cout << ans << endl;
        return 0;
        //Driver Code Ends
    }