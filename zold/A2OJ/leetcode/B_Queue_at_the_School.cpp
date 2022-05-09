#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    string x;
    cin >> x;
    while (k--)
    {
        for (int i = 0; i < n - 1; i++)
        {
            if (x[i] == 'B' and x[i + 1] == 'G')
            {
                swap(x[i], x[i + 1]);
                i++;
            }
        }
    }
    cout << x << endl;
    return 0;
}