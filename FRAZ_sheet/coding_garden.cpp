#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    if ((a + b) % 2 == 0 and a == b)
    {
        cout << "Coding" << endl;
    }
    else if ((a + b) % 2 == 1)
    {
        cout << "Garden" << endl;
    }
    else
    {
        cout << "Chess" << endl;
    }
    return 0;
}