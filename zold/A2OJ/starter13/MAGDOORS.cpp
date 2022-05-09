#include <bits/stdc++.h>

using namespace std;

int main()
{
    string aa, bb;
    string a = "01";
    int t;
    bool flag;
    cin >> t;
    while (t--)
    {
        cin >> aa;
        int s = 0;
        if (aa[0] == a[0])
        {
            s++;
        }
        for (int i = 1; i < aa.length(); i++)
        {
            if (aa[i] == aa[i - 1])
            {

                continue;
            }
            else
            {
                s++;
            }
        }
        cout << s << endl;
    }
}