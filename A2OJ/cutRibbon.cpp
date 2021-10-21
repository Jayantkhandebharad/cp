#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, b, c, d, x;
    cin >> n >> a >> b >> c;

    d = n % min(a, min(b, c));
    int mid;
    int min1 = min(a, min(b, c));
    x = floor(n / min1);
    if (a == min1)
    {
        if (b == max(b, c))
        {
            mid = c;
        }
        else
        {
            mid = b;
        }
    }
    else if (b == min1)
    {
        if (a == max(a, c))
        {
            mid = c;
        }
        else
        {
            mid = a;
        }
    }
    else if(c==min1)
    {
        if (a == max(a, b))
        {
            mid = b;
        }
        else
        {
            mid = a;
        }
    }

    while (d != 0 and x >= 0)
    {
        d = d + min1;
        x--;
        if (d % mid == 0 or d % max(a, max(b, c)) == 0 or (d-max(a, max(b, c)))%mid==0)
        {
            if(d%mid==0){
                cout<<x+floor(d/mid)<<endl;
            }
            else if((d-max(a, max(b, c)))%mid==0){
                cout<<floor(x+1+(d-max(a, max(b, c)))/mid)<<endl;
            }
            else{
                cout<<x+floor(d/max(a,max(b,c)))<<endl;
            }
            return 0;
        }
    }
    cout << x << endl;
    return 0;
}
