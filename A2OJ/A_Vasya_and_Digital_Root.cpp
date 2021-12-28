#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b;
    if (b == 0 and a > 1)
    {
        cout << "No solution" << endl;
    }
    else
    {
        for (int i = a; i >= 2; i--)
        {
            cout << "9";
        }
        cout << b << endl;
    }
    return 0;
}