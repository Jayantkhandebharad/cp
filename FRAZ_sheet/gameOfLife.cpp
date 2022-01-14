/*
289. Game of Life

According to Wikipedia's article: "The Game of Life, also known simply as Life, is a cellular automaton devised by the British mathematician John Horton Conway in 1970."

The board is made up of an m x n grid of cells, where each cell has an initial state: live (represented by a 1) or dead (represented by a 0). Each cell interacts with its eight neighbors (horizontal, vertical, diagonal) using the following four rules (taken from the above Wikipedia article):

Any live cell with fewer than two live neighbors dies as if caused by under-population.
Any live cell with two or three live neighbors lives on to the next generation.
Any live cell with more than three live neighbors dies, as if by over-population.
Any dead cell with exactly three live neighbors becomes a live cell, as if by reproduction.
The next state is created by applying the above rules simultaneously to every cell in the current state, where births and deaths occur simultaneously. Given the current state of the m x n grid board, return the next state.


*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void check(vector<vector<int>> &board, vector<vector<int>> &life, int i, int j, int n, int m)
    {
        int count = 0;
        if (i > 0 and j > 0)
        {
            count += board[i - 1][j - 1];
        }
        if (i > 0)
        {
            count += board[i - 1][j];
        }
        if (j > 0)
        {
            count += board[i][j - 1];
        }
        if (i > 0 and j < m)
        {
            count += board[i - 1][j + 1];
        }
        if (j < m)
        {
            count += board[i][j + 1];
        }
        if (i < n and j < m)
        {
            count += board[i + 1][j + 1];
        }
        if (i < n and j > 0)
        {
            count += board[i + 1][j - 1];
        }
        if (i < n)
        {
            count += board[i + 1][j];
        }

        if (board[i][j] == 0 and count == 3)
        {
            life[i][j] = 1;
        }
        else if (count > 3)
        {
            life[i][j] = 0;
        }
        else if (count < 2)
        {
            life[i][j] = 0;
        }
        else
        {
            life[i][j] = board[i][j];
        }
    }

    void gameOfLife(vector<vector<int>> &board)
    {
        vector<vector<int>> life(board.size(), vector<int>(board[0].size()));
        int n = board.size();
        int m = board[0].size();
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                check(board, life, i, j, n - 1, m - 1);
            }
        }
        board = life;
    }
};