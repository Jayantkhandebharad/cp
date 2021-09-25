
// Find the repeating and the missing
// https://www.geeksforgeeks.org/find-a-repeating-and-a-missing-number/

#include <vector>
#include <iostream>

using namespace std;

void solve(int arr[], int n)
{
    int aa, bb;
    vector<int> a(n, 0);
    for (int i = 0; i < n; i++)
    {
        if (a[arr[i]] != 1)
        {
            a[arr[i]] = 1;
        }
        else
        {
            aa = i;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            bb = i;
        }
    }
    cout << "repeted no. is " << aa + 1 << " and missing is : " << bb << endl;
}

int main()
{
    int n;

    cin >> n;
    int qq[n];
    for (int i = 0; i < n; i++)
    {
        cin >> qq[i];
    }
    solve(qq, n);

    return 0;
}