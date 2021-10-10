/* Given an NxN matrix Mat. Sort all elements of the matrix. */

//problem link: https://practice.geeksforgeeks.org/problems/sorted-matrix2333/1#
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> sortedMatrix(int N, vector<vector<int>> Mat)
    {
        vector<int> aa, bb;
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                aa.push_back(Mat[i][j]);
            }
        }
        sort(aa.begin(), aa.end());
        Mat.clear();
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {

                bb.push_back(aa[i * N + j]);
            }
            Mat.push_back(bb);
            bb.clear();
        }
        return Mat;
    }
};