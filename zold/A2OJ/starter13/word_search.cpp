/*
79. Word Search

Given an m x n grid of characters board and a string word, return true if word exists in the grid.

The word can be constructed from letters of sequentially adjacent cells, where adjacent cells are horizontally or vertically neighboring. The same letter cell may not be used more than once.


*/

#include <bits/stdc++.h>

using namespace std;
class Solution
{
public:
    bool f(int i, int j, int w, vector<vector<char>> &board, string word)
    {
        if (w == word.size())
        {
            return true;
        }
        bool x = false;
        char k;

        if (i >= board.size() || j >= board[0].size() || i < 0 || j < 0 || word[w] != board[i][j])
        {
            return false;
        }
        k = board[i][j];
        board[i][j] = '_';

        x = x || f(i - 1, j, w + 1, board, word);
        x = x || f(i + 1, j, w + 1, board, word);
        x = x || f(i, j - 1, w + 1, board, word);
        x = x || f(i, j + 1, w + 1, board, word);
        board[i][j] = k;
        return x;
    }
    bool exist(vector<vector<char>> &board, string word)
    {
        bool x = false;
        vector<vector<char>> &a = board;
        for (int i = 0; i < board.size(); i++)
        {

            for (int j = 0; j < board[0].size(); j++)
            {
                a = board;
                if (word[0] == a[i][j])
                {
                    x = x || f(i, j, 0, a, word);
                    if (x || word.size() <= 1)
                    {
                        return true;
                    }
                }
            }
        }
        return false;
    }
};