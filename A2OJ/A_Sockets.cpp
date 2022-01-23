/*
Vasya has got many devices that work on electricity. He's got n supply-line filters to plug the devices, the i-th supply-line filter has ai sockets.

Overall Vasya has got m devices and k electrical sockets in his flat, he can plug the devices or supply-line filters directly. Of course, he can plug the supply-line filter to any other supply-line filter. The device (or the supply-line filter) is considered plugged to electricity if it is either plugged to one of k electrical sockets, or if it is plugged to some supply-line filter that is in turn plugged to electricity.

What minimum number of supply-line filters from the given set will Vasya need to plug all the devices he has to electricity? Note that all devices and supply-line filters take one socket for plugging and that he can use one socket to plug either one device or one supply-line filter.

Input
The first line contains three integers n, m, k (1 ≤ n, m, k ≤ 50) — the number of supply-line filters, the number of devices and the number of sockets that he can plug to directly, correspondingly. The second line contains n space-separated integers a1, a2, ..., an (1 ≤ ai ≤ 50) — number ai stands for the number of sockets on the i-th supply-line filter.
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, k;

    cin >> n >> m >> k;

    vector<int> f(n);
    for (int i = 0; i < n; i++)
    {
        cin >> f[i];
    }
    sort(f.begin(), f.end(), greater<int>());
    int filter = 0;
    int i = 0;
    while (i < n)
    {

        if (m <= k)
        {
            break;
        }

        filter++;
        k--;
        k += f[i];

        i++;
    }

    if (m <= k)
    {
        cout << filter << endl;
        return 0;
    }
    cout << -1 << endl;
    return 0;
}