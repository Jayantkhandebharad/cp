/*
A. Worms Evolution
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
Professor Vasechkin is studying evolution of worms. Recently he put forward hypotheses that all worms evolve by division. There are n forms of worms. Worms of these forms have lengths a1, a2, ..., an. To prove his theory, professor needs to find 3 different forms that the length of the first form is equal to sum of lengths of the other two forms. Help him to do this.
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;

    unordered_map<long long, long long> map;
    cin >> n;
    vector<long long> v(n);
    for (long long i = 0; i < n; i++)
    {
        cin >> v[i];
        map[v[i]] = i;
    }

    for (long long i = v.size() - 1; i >= 0; i--)
    {
        for (long long j = 0; j < n; j++)
        {
            if (map[v[i] - v[j]] and map[v[i] - v[j]] != v[j])
            {
                cout << i + 1 << " " << j + 1 << " " << map[v[i] - v[j]] + 1;
                return 0;
            }
        }
    }
    cout << -1;
    return 0;
}