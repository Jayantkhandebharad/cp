#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t, j, k;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> j >> k;
        if (j % 2 == 0)
        {
            if (k > j / 2)
            {
                cout << -1 << endl;
            }
            else
            {
                int x = j, y = 0, l = 0;
                for (int a = 0; a < j; a++)
                {
                    x = 0;

                    for (int b = 0; b < j; b++)
                    {
                        if (b == y and x == 0 and k > 0)
                        {
                            cout << "R";
                            y += 2;
                            x = 1;
                            k--;
                        }
                        else
                        {
                            cout << ".";
                        }
                    }
                    l++;
                    cout << endl;
                    if (l == j)
                    {
                        break;
                    }
                    for (int b = 0; b < j; b++)
                    {
                        cout << ".";
                    }
                    l++;
                    cout << endl;
                }
            }
        }
        else
        {
            if (k > (j / 2) + 1)
            {
                cout << -1 << endl;
            }
            else
            {
                int x = j, y = 0, l = 0;
                for (int a = 0; a < j; a++)
                {
                    x = 0;

                    for (int b = 0; b < j; b++)
                    {
                        if (b == y and x == 0 and k > 0)
                        {
                            cout << "R";
                            y += 2;
                            x = 1;
                            k--;
                        }
                        else
                        {
                            cout << ".";
                        }
                    }
                    l++;

                    cout << endl;
                    if (l == j)
                    {
                        break;
                    }
                    for (int b = 0; b < j; b++)
                    {
                        cout << ".";
                    }
                    l++;
                    cout << endl;
                }
            }
        }
    }
    return 0;
}