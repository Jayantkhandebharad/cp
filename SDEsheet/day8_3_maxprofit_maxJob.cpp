/*
Given a set of N jobs where each jobi has a deadline and profit associated with it.

Each job takes 1 unit of time to complete and only one job can be scheduled at a time. We earn the profit associated with job if and only if the job is completed by its deadline.

Find the number of jobs done and the maximum profit.

Note: Jobs will be given in the form (Jobid, Deadline, Profit) associated with that Job.
*/

#include <bits/stdc++.h>
using namespace std;

struct Job
{
    int id;     // Job Id
    int dead;   // Deadline of job
    int profit; // Profit if job is over before or on deadline
};

class Solution
{
public:
    bool static compare(Job a, Job b)
    {

        return (a.profit > b.profit);
    }
    //Function to find the maximum profit and the number of jobs done.
    vector<int> JobScheduling(Job arr[], int n)
    {
        // your code here
        sort(arr, arr + n, compare);
        int jobs = 0, profits = 0, maxi = arr[0].dead;

        for (int i = 0; i < n; i++)
        {

            maxi = max(arr[i].dead, maxi);
        }
        int slot[maxi + 1];
        for (int i = 0; i < maxi + 1; i++)
        {
            slot[i] = -1;
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = arr[i].dead; j > 0; j--)
            {
                if (slot[j] == -1)
                {
                    jobs++;
                    profits += arr[i].profit;
                    slot[j] = i;
                    break;
                }
            }
        }
        return {jobs, profits};
    }
};
