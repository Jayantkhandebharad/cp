#include <cmath>
#include <iostream>

using namespace std;

int main()
{
    int t, n, a, b, c;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        if (n % 4 == 0 and n != 0)
        {
            cout << "YES" << endl;
            for (int j = 0; j < floor(n / 4); j++)
            {
                cout << j+1 << " ";
            }
            for (int j = floor(3 * n / 4); j < n; j++)
            {
                cout << j+1 << " ";
            }
            cout << endl;
            for (int j = floor(n / 4); j < floor(3 * n / 4); j++)
            {
                cout << j+1 << " ";
            }
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
