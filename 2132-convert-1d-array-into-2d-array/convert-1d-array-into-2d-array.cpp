class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        vector<vector<int>> a(m,vector<int>(n,0));
        if(original.size() != m*n) return {};
        int l=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                a[i][j] = original[l];
                l++;
            }
        }
        return a;
    }
};