//when we want to swap the any 2 element of array then score will get affected by only that 2 elements and
//and not get affected by other elements in between

//a = 2 2 4 5 6 6->we want 1st 2 swap with last 6-> mid element stay on same position so score will not affect due to them
//->6 2 4 5 6 2 and score is 4

//we will take all element of first array to left of array so score = summetion of(-1 * value*moves)
//not we are ready to disttribute...again score = score + summetion of(value * moves ) because in this thime its moving to right

#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long a = 0, b = 0, n, x;
        cin >> n;
        for (long long i = 0; i < n; i++)
        {
            cin >> x;
            a += x * i;
        }
        for (long long i = 0; i < n; i++)
        {
            cin >> x;
            b += x * i;
        }
        cout << b - a << endl;
    }
}

// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// int bubble_sort(vector<int> A, int n)
// {
//     int temp;
//     int x = 0;
//     for (int k = 0; k < n - 1; k++)
//     {
//         // (n-k-1) is for ignoring comparisons of elements which have already been compared in earlier iterations

//         for (int i = 0; i < n - k - 1; i++)
//         {
//             if (A[i] > A[i + 1])
//             {
//                 // here swapping of positions is being done.
//                 temp = A[i];
//                 A[i] = A[i + 1];
//                 A[i + 1] = temp;
//                 x++;
//             }
//         }
//     }
// }

// int main()
// {
//     int t, n, kk, mm, nn;
//     cin >> t;
//     vector<int> aa, bb;
//     for (int i = 0; i < t; i++)
//     {
//         cin >> n;
//         for (int j = 0; j < n; j++)
//         {
//             cin >> kk;
//             aa.push_back(kk);
//         }
//         for (int j = 0; j < n; j++)
//         {
//             cin >> kk;
//             bb.push_back(kk);
//         }
//         mm = bubble_sort(aa, n);
//         nn = bubble_sort(bb, n);
//         cout << mm - nn << endl;
//     }
// }