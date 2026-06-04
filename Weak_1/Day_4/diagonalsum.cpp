class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        
        int row = mat.size();
        
        int primediag =0;
        int secdiag =0;
        
        for(int i =0;i<row;i++){
            primediag+=mat[i][i];
            secdiag+=mat[row-i-1][i];
        }
          int sum = primediag+secdiag;
        return row%2!=0? sum-mat[row/2][row/2]:sum;
        
        
    }
};