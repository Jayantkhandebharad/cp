#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc, int newColor)
    {
        int x = image[sr][sc];
        if (x == newColor)
        {
            return image;
        }
        image[sr][sc] = newColor;

        if (sr > 0 and image[sr - 1][sc] == x)
        {
            floodFill(image, sr - 1, sc, newColor);
        }
        if (sr + 1 < image.size() and image[sr + 1][sc] == x)
        {
            floodFill(image, sr + 1, sc, newColor);
        }
        if (sc + 1 < image[0].size() and image[sr][sc + 1] == x)
        {
            floodFill(image, sr, sc + 1, newColor);
        }
        if (sc > 0 and image[sr][sc - 1] == x)
        {
            floodFill(image, sr, sc - 1, newColor);
        }
        return image;
    }
};