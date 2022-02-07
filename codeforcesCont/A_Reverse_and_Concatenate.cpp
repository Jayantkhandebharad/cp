#include <bits/stdc++.h>
using namespace std;

bool check_palindrome(string ss)
{

    string pp = ss;
    reverse(pp.begin(), pp.end());
    if (ss == pp)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void rev_and_concate()
{
    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    if (k == 0)
    {
        cout << 1 << endl;
        return;
    }
    if (k == 1)
    {
        if (check_palindrome(s) == true)
        {
            cout << 1 << endl;
            return;
        }
        else
        {
            cout << 2 << endl;
            return;
        }
    }
    if (k > 1)
    {
        if (check_palindrome(s) == true)
        {
            cout << 1 << endl;
            return;
        }
        else
        {
            cout << 2 << endl;
            return;
        }
    }
}
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        rev_and_concate();
    }
    return 0;
}