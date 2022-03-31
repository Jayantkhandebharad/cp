#include <bits/stdc++.h>
using namespace std;

// Function to reverse first k elements of a queue.
void solve(queue<int> &q, int k, int i)
{
    if (i >= k)
    {
        return;
    }
    i++;
    int x = q.front();
    q.pop();
    solve(q, k, i);
    q.push(x);
    return;
}
queue<int> modifyQueue(queue<int> q, int k)
{
    // add code here.
    solve(q, k, 0);

    for (int i = 0; i < q.size() - k; i++)
    {
        int x = q.front();
        q.pop();
        q.push(x);
    }
    return q;
}