#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, c = 0;
    cin >> n;

    while (true)
    {
        n++, c++;
        stringstream sss;
        string s;
        sss << n;
        sss >> s;
        if (s.find('8') != -1)
        {
            cout << c << endl;
            return 0;
        }
    }
    return 0;
}