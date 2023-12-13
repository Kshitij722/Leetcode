class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        vector<int> a(mat.size()), b(mat[0].size());
        int count =0;
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){
            
                  a[i] += mat[i][j];
                  b[j] += mat[i][j];
                
            }
        }
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){
                if(a[i]==1 && b[j]==1 && mat[i][j]==1) count++;
            }
        }
        return count;
    }
};