#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    std::cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int i = 1;
        int ans = 0;
        while (pow(2, i) <= n)
        {

            i++;
        }
        ans = n - i;
        // cout<<i<<endl;
        // ans++;

        cout << ans << endl;
    }
    return 0;
}