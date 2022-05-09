//Given an n x n matrix and a number x, find the position of x in the matrix if it is present in it.
//Otherwise, print “Not Found”. In the given matrix, every row and column is sorted in increasing order.
//The designed algorithm should have linear time complexity.

//                    { {10, 20, 30, 40},
//                      {15, 25, 35, 45},
//                      {27, 29, 37, 48},
//                      {32, 33, 39, 50}};

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int target = 27;
    int aa[4][4] = {{10, 20, 30, 40},
                    {15, 25, 35, 45},
                    {27, 29, 37, 48},
                    {32, 33, 39, 50}};
    int i = 0, j = 3;
    while (i < 4 and j >= 0)
    {
        if (aa[i][j] == target)
        {
            cout << "target found at " << i << "," << j << endl;
            return 0;
        }
        if (aa[i][j] > target)
        {
            j--;
        }
        else
        {
            i++;
        }
    }
    return 0;
}