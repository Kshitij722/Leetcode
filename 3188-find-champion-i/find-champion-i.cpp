class Solution {
public:
    int findChampion(vector<vector<int>>& grid) {
        int ans = INT_MIN;
        int a;

        for(int i=0;i<grid.size();i++){
            int count = 0;
            for(int j=0;j<grid.size();j++){
                if(grid[i][j] == 1 && i!=j){
                    count++;
                }
            }
            if(count>ans){
                ans = count;
                a = i;
            }
        }
        return a;
    }
};