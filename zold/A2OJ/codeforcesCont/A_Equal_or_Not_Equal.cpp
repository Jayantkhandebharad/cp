#include <bits/stdc++.h>
using namespace std;

void xyz()
{
    string a;
    cin >> a;
    string answer = "YES";
    int l = 0;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == 'N')
        {
            l++;
        }
    }
    if (l == 1)
    {
        answer = "NO";
    }
    cout << answer << endl;
}
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {

        xyz();
    }
    return 0;
}