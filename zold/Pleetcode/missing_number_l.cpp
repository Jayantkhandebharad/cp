#include <bits/stdc++.h>
using namespace std;

void s()
{
    int n = 4;
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    vector<int> v = {a, b, c, d};
    sort(v.begin(), v.end());
    a = v[0];
    b = v[1];
    c = v[2];
    d = v[3];

    //kahipan zala tr a,b he 2 a-b aani a/b la represent kartil karan tyanchech value least yete in all conditions

    long int a1 = (c + a) / 2;
    //here i am considering c = num1+num2
    long int b1 = c - a1; //so b2 will be num2

    long int a2 = (c + b) / 2;
    long int b2 = c - a2; //here i didn't know whether a was num1-num2 or it was b....so i tried using both

    // in case c is not num1 +num2 then tyat d ch aasnar so khali d la consider karun kartoy

    long int a3 = (d + a) / 2;
    long int b3 = d - a3;

    long int a4 = (d + b) / 2;
    long int b4 = d - a4;

    // aata brute force type madhe just try karaycha ki konta barobr aahe
    if ((a1 % 1 == 0 and a1 != 0) && (b1 % 1 == 0 and b1 != 0))
    {
        if ((int)((a1 >= 1) && (b1 >= 1) && a1 <= 10000 && b1 <= 10000 && (a1 / b1 == b) and (a1 * b1 == d)))
        {
            cout << a1 << " " << b1 << endl;
            return;
        }
    }
    if ((a2 % 1 == 0 and a2 != 0) && (b2 % 1 == 0 and b2 != 0))
    {
        if ((int)((a2 >= 1) && (b2 >= 1) && a2 <= 10000 && b2 <= 10000 && (a2 / b2 == a) and (a2 * b2 == d)))
        {
            cout << a1 << " " << b1 << endl;
            return;
        }
    }
    if ((a3 % 1 == 0 and a3 != 0) && (b3 % 1 == 0 and b3 != 0))
    {
        if ((int)((a3 >= 1) && (b3 >= 1) && a3 <= 10000 && b3 <= 10000 && (a3 / b3 == b) and (a3 * b3 == c)))
        {
            cout << a1 << " " << b1 << endl;
            return;
        }
    }
    if ((a4 % 1 == 0 and a4 != 0) && (b4 % 1 == 0 and b4 != 0))
    {
        if ((int)((a4 >= 1) && (b4 >= 1) && a4 <= 10000 && b4 <= 10000 && (a4 / b4 == a) and (a4 * b4 == c)))
        {
            cout << a1 << " " << b1 << endl;
            return;
        }
    }

    cout << -1 << " " << -1 << endl;
    return;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        s();
    }
    return 0;
}