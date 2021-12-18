#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int p = 1, nn = 1, z = 1;
    int store_prev;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<int> positive1;
    vector<int> negative1;
    vector<int> zero1;
    int x = 0;
    for (int i = 0; i < n; i++)
    {

        if (a[i] < 0)
        {
            negative1.push_back(a[i]);
        }
        else if (a[i] > 0)
        {
            store_prev = a[i];
            positive1.push_back(a[i]);
        }
        else
        {
            zero1.push_back(a[i]);
        }
    }
    if (negative1.size() % 2 == 0 and negative1.size() > 0)
    {
        zero1.push_back(negative1[negative1.size() - 1]);
        negative1.pop_back();
    }
    if (negative1.size() > 2)
    {
        positive1.push_back(negative1[negative1.size() - 1]);
        positive1.push_back(negative1[negative1.size() - 2]);
        negative1.pop_back();
        negative1.pop_back();
    }
    cout << negative1.size() << " ";
    for (int i = 0; i < negative1.size(); i++)
    {
        cout << negative1[i] << " ";
    }
    cout << endl;
    cout << positive1.size() << " ";
    for (int i = 0; i < positive1.size(); i++)
    {
        cout << positive1[i] << " ";
    }
    cout << endl;
    cout << zero1.size() << " ";
    for (int i = 0; i < zero1.size(); i++)
    {
        cout << zero1[i] << " ";
    }
    return 0;
}