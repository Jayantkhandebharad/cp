#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool prime(int n)
{
    if (n == 1)
    {
        return false;
    }

    if (n == 2 || n == 3)
    {
        return true;
    }
    int req = sqrt(n);
    for (int i = 2; i <= req; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    // your code goes here
    int n = 1000000;
    int p[1000001];
    int a[1000001];
    a[0] = 0;
    a[1] = 0;
    a[2] = 1;
    a[3] = 1;
    p[0] = 0;
    p[1] = 0;
    p[2] = 1;
    p[3] = 2;
    for (int i = 4; i <= n; i++)
    {
        if (prime(i))
        {
            p[i] = p[i - 1] + 1;
            a[i] = 1;
        }
        else
        {
            p[i] = p[i - 1];
            a[i] = 0;
        }
    }
    int t;
    cin >> t;
    while (t--)
    {
        int op;
        cin >> op;
        long long int num = 1;
        long long int m = 1000000007;
        for (int i = 1; i <= op; i++)
        {
            int l;
            cin >> l;
            if (a[i] == 0)
            { //non prime
                num = ((num % m) * (p[l] % m)) % m;
                //cout<<"nonprime\n";
            }
            else
            { //prime
                long long int mul = l - p[l];
                num = ((num % m) * (mul % m)) % m;
                //  cout<<"prime\n";
            }
        }
        cout << num << "\n";
    }
    return 0;
}