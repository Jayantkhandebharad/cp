#include <bits/stdc++.h>
using namespace std;

int main()
{
    char input[1000];
    cin.getline(input, sizeof(input));
    char x;
    int i = 0;
    while (input[i] != '?')
    {
        if (input[i] != ' ')
        {
            x = input[i];
        }
        i++;
    }
    if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u' || x == 'y' || x == 'A' || x == 'E' || x == 'I' || x == 'O' || x == 'U' || x == 'Y')
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}