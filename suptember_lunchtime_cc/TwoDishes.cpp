#include <iostream>

using namespace std;

int main()
{

    int t, a, b, c, n;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n >> a >> b >> c;
        if (a + c >= n and b >= n)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}