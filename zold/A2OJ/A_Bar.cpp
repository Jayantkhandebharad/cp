/*
56A bar

According to Berland laws it is only allowed to sell alcohol to people not younger than 18 years. Vasya's job is to monitor the law's enforcement. Tonight he entered a bar and saw n people sitting there. For every one of them Vasya happened to determine either the age or the drink the person is having. Vasya can check any person, i.e. learn his age and the drink he is having at the same time. What minimal number of people should Vasya check additionally to make sure that there are no clients under 18 having alcohol drinks?

The list of all alcohol drinks in Berland is: ABSINTH, BEER, BRANDY, CHAMPAGNE, GIN, RUM, SAKE, TEQUILA, VODKA, WHISKEY, WINE
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string a;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (a == "ABSINTH" || a == "BEER" || a == "BRANDY" || a == "CHAMPAGNE" || a == "GIN" || a == "RUM" || a == "SAKE" || a == "TEQUILA" || a == "VODKA" || a == "WHISKEY" || a == "WINE")
        {
            count++;
        }
        else if (!isalpha(a[0]) and stoi(a) < 18)
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}