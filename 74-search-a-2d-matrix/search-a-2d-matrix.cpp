class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int c = matrix[0].size();
        int r = matrix.size();
        int low = 0;
        int high = (r*c)-1;
        while(low<=high){
            int mid = (high+low)/2;
            if(matrix[mid/c][mid%c] == target) return true;
            else if(matrix[mid/c][mid%c]>target) high = mid-1;
            else low = mid+1;
        }
        return false;
    }
};