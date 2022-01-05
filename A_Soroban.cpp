#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    cin >> a;
    reverse(a.begin(), a.end());
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] > '4')
        {
            cout << "-O|";
            int x = a[i] - '5';
            for (int j = 0; j < x; j++)
            {
                cout << "O";
            }
            cout << "-";
            for (int j = 0; j < 4 - x; j++)
            {
                cout << "O";
            }
            cout << endl;
        }
        else
        {
            cout << "O-|";
            int x = a[i] - '0';
            for (int j = 0; j < x; j++)
            {
                cout << "O";
            }
            cout << "-";
            for (int j = 0; j < 4 - x; j++)
            {
                cout << "O";
            }
            cout << endl;
        }
    }
}