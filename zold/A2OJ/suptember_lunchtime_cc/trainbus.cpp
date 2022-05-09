#include <bits/stdc++.h>

using namespace std;
int main()
{
    int a, b, c, n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b >> c;
        if (a + b > c)
        {
            cout << "TRAIN" << endl;
                }
        else if (a + b < c)
        {
            cout << "PLANEBUS" << endl;
        }
        else
        {
            cout << "EQUAL" << endl;
        }
    }
    return 0;
}