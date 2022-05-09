/*
B. Fortune Telling


Your friends Alice and Bob practice fortune telling.

Fortune telling is performed as follows. There is a well-known array a of n non-negative integers indexed from 1 to n. The tellee starts with some non-negative number d and performs one of the two operations for each i=1,2,…,n, in the increasing order of i. The possible operations are:

replace their current number d with d+ai
replace their current number d with d⊕ai (hereinafter ⊕ denotes the bitwise XOR operation)
Notice that the chosen operation may be different for different i and for different tellees.

One time, Alice decided to start with d=x and Bob started with d=x+3. Each of them performed fortune telling and got a particular number in the end. Notice that the friends chose operations independently of each other, that is, they could apply different operations for the same i.

You learnt that either Alice or Bob ended up with number y in the end, but you don't know whose of the two it was. Given the numbers Alice and Bob started with and y, find out who (Alice or Bob) could get the number y after performing the operations. It is guaranteed that on the jury tests, exactly one of your friends could have actually gotten that number.
*/

#include <bits/stdc++.h>
using namespace std;

string solve(long long n, long long x, long long y)
{
    int e = 0, o = 0;
    vector<long long> a(n);
    for (long long i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] % 2 == 0)
        {
            e++;
        }
        else
        {
            o++;
        }
    }
    if ((x % 2 == 0 and o % 2 == 0 and y % 2 == 0) || (x % 2 == 1 and o % 2 == 0 and y % 2 == 1) || (x % 2 == 1 and o % 2 == 1 and y % 2 == 0) || (x % 2 == 0 and o % 2 == 1 and y % 2 == 1))
    {
        return "Alice";
    }
    return "Bob";
}

int main()
{
    long long t;
    cin >> t;
    long long x, y, n;
    while (t--)
    {
        cin >> n >> x >> y;
        cout << solve(n, x, y) << endl;
    }
}