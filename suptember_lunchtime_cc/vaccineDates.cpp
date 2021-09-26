#include <iostream>

using namespace std;
int main()
{
    int t, d, l, r;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> d >> l >> r;
        if (d >= l and d <= r)
        {
            cout << "Take second dose now" << endl;
        }
        else if (d < l and d < r)
        {
            cout << "Too Early" << endl;
        }
        else
        {
            cout << "Too Late" << endl;
        }
    }
}
