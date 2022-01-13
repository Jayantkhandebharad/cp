#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i;
    cin >> i;
    int a;

    for (int j = 0; j < i; j++)
    {
        cin >> a;
        for (int k = 0; k < a; k++)
        {
            for (int l = 0; l < a; l++)
            {

                cout << 1 << " ";
                //cout << (k ^ l) + 1 << " ";
            }
            cout << endl;
        }
    }
}