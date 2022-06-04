#include<bits/stdc++.h>
using namespace std;

void solve(){
    
}


int main(){
    solve();
}			
class NumMatrix {
private:
    vector<vector<int>> grid;
    vector<vector<int>> mm;
public:
    NumMatrix(vector<vector<int>>& matrix) {
        mm = matrix;
        grid = matrix;
        for(int i=0;i<matrix.size();i++){
            int sum1 = 0;
            for(int j=0;j<matrix[0].size();j++){
                grid[i][j]=sum1;
                sum1 += matrix[i][j];
            }
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        int sum = 0;
        for(int i=row1;i<=row2;i++){
            sum += (grid[i][col2]-grid[i][col1]+mm[i][col2]);
        }
        return sum;
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */