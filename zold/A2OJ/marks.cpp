#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, ans1111 = 0, flag111 = 0, max111;
    string s[111];
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            max111 = s[i][j];
            for (int t = 0; t < n; t++)
            {
                if (max111 < s[t][j])
                {
                    flag111 = 1;
                    break;
                }
            }
            if (flag111 == 1)
            {
                flag111 = 0;
                continue;
            }


            
            else
            {
                ans1111++;
                break;
            }
        }
    }
    cout << ans1111 << endl;
    return 0;
}