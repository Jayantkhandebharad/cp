#include <bits/stdc++.h>
using namespace std;

class Nqueen
{

private:
    void print2d(vector<vector<int>> res)
    {
        cout << "-------------------------------\n";
        for (int i = 0; i < res.size(); i++)
        {
            for (int j = 0; j < res.size(); j++)
            {
                cout << res[i][j] << " ";
            }
            cout << endl;
        }
        cout << "-------------------------------\n";
    }

    bool proper(vector<vector<int>> &res, int row, int col)
    {
        // check that row from left to that node
        for (int i = 0; i < col; i++)
        {
            if (res[row][i] == 1)
            {
                return false;
            }
        }

        // check for left upper diagonal
        for (int i = row, j = col; i >= 0 && j >= 0; i--, j--)
        {
            if (res[i][j] == 1)
            {
                return false;
            }
        }

        // check for upper left diagonal
        for (int i = row, j = col; i < res.size() && j >= 0; i++, j--)
        {
            if (res[i][j] == 1)
            {
                return false;
            }
        }

        return true;
    }

    bool nqsolve(vector<vector<int>> &res, int col)
    {
        int N = res.size();

        // if we are solved for all the columns then return true
        if (col >= N)
            return true;

        // now check for the queen in the column for all rows possible

        for (int i = 0; i < N; i++)
        {
            if (proper(res, i, col))
            {
                res[i][col] = 1;
                if (nqsolve(res, col + 1)) // if we found that position then move for next column check
                {
                    return true;
                }
                res[i][col] = 0;  //backtrack if we didn't find the position
            }
        }
        return false;
    }

public:
    void solution(int n)
    {
        // initilize a 2d vector of all zero's
        vector<vector<int>> res(n, vector<int>(n, 0));
        if (nqsolve(res, 0)) {
            cout << "Solution Found" << endl;
            print2d(res);
        }
        else {
            cout << "No solution found" << endl;
        }
    }
};

// menu function
int main()
{
    Nqueen queen;
    int n;
    cout << "Enter the size of the array : ";
    cin >> n;
    queen.solution(n);
    return 0;
}