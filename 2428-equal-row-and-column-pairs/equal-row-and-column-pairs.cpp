class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        map<vector<int>,int> a;
        int r = grid.size();
        int c = grid[0].size();
        int ans = 0;
        for(vector<int> i : grid){
            a[i]++;
        }
       
        for(int i=0;i<r;i++){
            vector<int> list = {};
            for(int j=0;j<c;j++){
                list.push_back(grid[j][i]);
            }
            ans+= a[list];
        }
        return ans;
    }
};