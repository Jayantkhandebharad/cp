#include <bits/stdc++.h>
using namespace std;

//Function to reverse the queue.
void solve(queue<int> &q)
{
    // base case
    if (q.empty())
    {
        return;
    }

    int curr = q.front();
    q.pop();
    // R.C
    solve(q);
    q.push(curr);
}
queue<int> rev(queue<int> q)
{
    // add code here.
    solve(q);
    return q;
}