#include <iostream>
using namespace std;

int main()
{
    string s, t;
    cin >> s;
    cin >> t;
    int l = 0;
    for (int i = 0; i < t.size(); i++)
    {
        if (l >= s.size())
        {
            break;
        }
        if (t[i] == s[l])
        {
            l++;
        }
    }
    cout << l+1<< endl;
    return 0;
}
