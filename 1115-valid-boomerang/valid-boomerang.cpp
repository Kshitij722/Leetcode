class Solution {
public:
    bool isBoomerang(vector<vector<int>>& p) {
      int ans = (p[0][0]*(p[1][1]-p[2][1]) + p[1][0]*(p[2][1]-p[0][1]) + p[2][0]*(p[0][1]-p[1][1]));
      if(ans==0) return false;
      return true;
    }
};