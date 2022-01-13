#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, a;
        cin >> n >> a;
        if (n == 1)
        {
            if (a % 2 == 0)
                cout << "Even\n";
            else
                cout << "Odd" << endl;
            continue;
        }
        if (a % 2 == 1)
        {
            if (n % 2 == 0)
                cout << "Even\n";
            else
                cout << "Odd" << endl;
            continue;
        }
        else
        {
            cout << "Impossible\n";
        }
    }
    return 0;
}