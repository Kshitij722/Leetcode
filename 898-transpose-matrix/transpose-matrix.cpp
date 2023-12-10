class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        vector<vector<int>> a(matrix[0].size(),vector<int>(matrix.size(),0));
        for(int i=0;i<matrix[0].size();i++){
            for(int j=0;j<matrix.size();j++){
                a[i][j] = matrix[j][i];
            }
        }
        return a;
    }
};