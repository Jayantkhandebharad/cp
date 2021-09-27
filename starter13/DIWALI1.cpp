#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long p, a, b, c, x, y, z1, z2, t, z,remender,qq,ww;
    cin >> t;
    for (long long i = 0; i < t; i++)
    {

        cin >> p >> a >> b >> c >> x >> y;
        z2 = c + a * y;
        z1 = b + a * x;
        if (z1 > z2)
        {
            remender = p%z2;
            qq=floor(p / z2);
        }
        else
        {
            remender = p%z1;
            qq=floor(p / z1);
        }
        if(remender>=z1){
            qq++;
        }
        else if(remender>=z2){
            qq++;
        }
        cout<<qq<<endl;
    }
}
