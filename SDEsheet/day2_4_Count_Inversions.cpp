//https://www.geeksforgeeks.org/counting-inversions/
//Inversion Count for an array indicates – how far (or close) the array is from being sorted.
//If the array is already sorted, then the inversion count is 0,
//but if the array is sorted in the reverse order, the inversion count is the maximum.
//Formally speaking, two elements a[i] and a[j] form an inversion if a[i] > a[j] and i < j

#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, a = 0;
    cin >> n;
    vector<int> aa(n);
    for (int i = 0; i < n; i++)
    {
        cin >> aa[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (aa[i] > aa[j])
            {
                a++;
            }
        }
    }
    cout << a << endl;
}

//merge sort techinique is preferred