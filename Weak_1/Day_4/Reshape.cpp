class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {

         vector<vector<int>>ans(r,vector<int>(c));
         vector<int>temp;

        int R = mat.size();
        int C = mat[0].size();
        
        if(R*C != r*c) return mat;


        for(int i =0;i<R;i++){ 
             for(int j =0;j<C;j++){ 
                temp.push_back(mat[i][j]); 
            }
        }
        int k =0;
        for(int i =0;i<r;i++){ 
             for(int j =0;j<c;j++){ 
               ans[i][j]=temp[k++];
            }
        }
        return ans;

    }
};