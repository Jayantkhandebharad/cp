//https://leetcode.com/problems/surrounded-regions/

#include<bits/stdc++.h>
using namespace std;


class Solution {
    int m, n;
    
    bool valid(int i, int j) {
        return i >= 0 && i < m && j >= 0 && j < n;
    }
    
    void dfs(int i, int j, vector<vector<char>>& board) {
        board[i][j] = '+';
        for(int di = -1; di <= 1; ++di) for(int dj = -1; dj <= 1; ++dj) if(abs(di) != abs(dj)) {
            int new_i{i+di}, new_j{j+dj};
            if(!valid(new_i, new_j) || board[new_i][new_j] != 'O') continue;
            dfs(new_i, new_j, board);
        }
    }
    
public:
    void solve(vector<vector<char>>& board) {
        if(board.empty() || board[0].empty()) return;
        m = board.size(), n = board[0].size();
        for(int i = 0; i < m; ++i) {
            if(board[i][0] == 'O') dfs(i, 0, board);
            if( board[i][n-1] == 'O') dfs(i, n-1, board);
        }
        for(int j = 0; j < n; ++j) {
            if(board[0][j] == 'O') dfs(0, j, board);
            if(board[m-1][j] == 'O') dfs(m-1, j, board);
        }
        for(int i = 0; i < m; ++i) for(int j = 0; j < n; ++j) {
            auto&& c = board[i][j];
            if(c == 'O') c = 'X';
            else if(c == '+') c = 'O';
        }
    }
};